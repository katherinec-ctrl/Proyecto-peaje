#include <iostream>
#include <vector>
#include <string>

#include "Vehiculo.hpp"
#include "Carro.hpp"
#include "Moto.hpp"
#include "Bus.hpp"
#include "Camion.hpp"
#include "Persona.hpp"
#include "Propietario.hpp"
#include "Operador.hpp"
#include "Excepciones.hpp"
#include "Caseta.hpp"
using namespace std;

int main(){
    vector <Vehiculo*> vehiculos;
    vector <Persona*> personas;
    Carro* carro1=nullptr;
    Moto* moto1 = nullptr;
    Moto* moto2= nullptr;
    Bus* bus1 = nullptr;
    Camion* camion1 = nullptr;

    Operador* operador= new Operador ("Laura", "1059234612","Administradora peaje", "2468");
    personas.push_back(operador);
    Caseta* caseta = new Caseta (operador);

    Propietario* pV=new Propietario ( "Vanesa", "1010089280", "Administradora de empresas", true);
    personas.push_back(pV);
    Propietario* pN= new Propietario ( "Sofia", "1059234611", "Historiadora e ingeniera de sistemas", false);
    personas.push_back(pN);

    int opc;
    do {
        cout <<"        PEAJE NORTE CERRO VERDE         " <<endl;
        cout <<"Dijite una opcion\n";
        cout << "1. CASO 1: tarifa carro propietario no local \n";
        cout << "2. Caso 2: tarifa carro propietario local \n";
        cout << "3. Caso 3: tarifa moto propietario local\n";
        cout << "4. CASO 4: tarifa moto sin propietario y de alto cilindraje\n";
        cout << "5. Caso 5: tarifa bus propietario local \n";
        cout << "6. Caso 6: tarifa camion sin propietario \n";
        cout << "7. CASO 7: tarifa camion caso 6 más un eje \n";
        cout << "8. Caso 8: carro con placa vacia\n";
        cout << "9. Caso 9: camion con un solo eje \n";
        cout << "10.Caso 10: recaudo total y conteo x categoria casos 2,3,5,7\n";
        cout << "11. Caso 11: liberar caseta y vehi1culos caso 10 \n";
        cout << "0. Salir\n";
        cin >> opc;
       try{
        switch (opc) {

        case 1: {
             carro1 = new Carro ("ABC123",pN,3);
             vehiculos.push_back(carro1);
             cout <<"Tarifa: $ "<< carro1->calcularTarifa()<<endl;
             break;
        }
        case 2:  {
             if (carro1 == nullptr) {
             cout << "Primero debe ejecutar el caso 1." << endl;
             break;
             }
            carro1->setPropietario(pV);
            cout <<"Tarifa (local): $ "<< carro1->calcularTarifa() <<endl;
            break;
        }
        case 3:{
             moto1= new Moto ("XYZ45A",pV, 125);
             vehiculos.push_back(moto1);
             cout <<"Tarifa (local): $" << moto1->calcularTarifa()<<endl;
             break;
        }
        case 4:{
            moto2= new Moto ("MOT650",650);
            vehiculos.push_back(moto2);
            cout <<"Tarifa: $"<<moto2->calcularTarifa()<<endl;
            moto2->informarAltoCilindraje();
            break;
        }
        case 5: {
            bus1= new Bus ("BUS777", pV, 38);
            vehiculos.push_back(bus1);
            cout<<"Tarifa (local): $"<< bus1->calcularTarifa()<<endl;
            break;
        }
        case 6: {
            camion1= new Camion ("CAM301",3);
            vehiculos.push_back(camion1);
            cout <<"Tarifa: $"<< camion1->calcularTarifa()<<endl;
            break;
        }
        case 7: {
            camion1->agregarEje();
            cout <<"Nuevo numero de ejes del camion" << camion1->getPlaca()<< "es igual a: "<< camion1->getCantEjes()<<endl;
            cout <<"Nueva tarifa: $"<< camion1->calcularTarifa()<<endl;
            break;
        }
        case 8: {
           Carro* carroDefectuoso= new Carro(" ", 2);
            vehiculos.push_back(carroDefectuoso);
            break;
        }
        case 9: {
            Camion* camionDefectuoso= new Camion ("CAM666",1);
            vehiculos.push_back(camionDefectuoso);
            break;
        }
        case 10:{
        if (carro1==nullptr || moto1==nullptr || bus1==nullptr||camion1==nullptr){
            cout <<"Implemente los pasos del 1 al 7\n";
            break;
        }
           caseta->registrarPasoV(carro1);
           caseta->registrarPasoV(moto1);
           caseta->registrarPasoV(bus1);
           caseta->registrarPasoV(camion1);
           cout <<"Informacion del peaje: \n";
           cout << "Total de vehiculos que pasaron: "<< caseta->getCantV()<<endl;
           cout << "Cantidad de carros: "<< caseta->getCantC()<<endl;
           cout <<"Cantidad de Motos: "<<caseta->getCantM()<<endl;
           cout <<"Cantidad de Buses: "<<caseta->getCantB()<<endl;
           cout <<"Cantidad de Camiones: " << caseta->getCantCa()<<endl;
           cout <<"Total recaudado por la caseta: "<< caseta->getTotalCaja()<<endl;
           break;
        }
        case 11:{
         delete caseta;
         Vehiculo* vehiculos [4]= {carro1, moto1, bus1, camion1};
         for (int i=0; i<4;i++){
         delete vehiculos[i];
        }
         break;
        }
        case 0: 
            cout <<"Saliendo...\n";
            break;
        default:
        cout <<"Opción inválida\n";
    }
}
    catch (const exception&e){
        cout <<e.what()<<endl;
    }
    } while(opc!=0);

    for (int i =0;i<personas.size();i++){
        delete personas[i];
    }
    personas.clear();
    return 0;
}
