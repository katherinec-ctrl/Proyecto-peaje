#include "Bus.hpp"
#include "Excepciones.hpp"
Bus::Bus(string placa, Propietario* propietario, int cantPuestos):
    Vehiculo (placa){
        if (cantPuestos<1){
            throw DatosInvalidosException ("El bus debe tener al menos un puesto");
        }
            this->cantPuestos=cantPuestos;
    }

Bus:: Bus (string placa, int cantPuestos):
    Vehiculo (placa){
        if (cantPuestos<1){
            throw DatosInvalidosException ("El bus debe tener al menos un puesto");
        }
            this->cantPuestos=cantPuestos;
        }
Bus:: ~Bus(){
    cout << "Destruyendo bus"<< this->placa<< endl;

}

    void Bus:: setCantPuestos(int cantPuestos){this->cantPuestos=cantPuestos;}
    int Bus:: getCantPuestos(){return this->cantPuestos;}

    string Bus:: getTipo() const {
        return "Bus";
    }
    
    float Bus:: calcularTarifa() const {
        return 14000;
    }

    string Bus:: info() const {
        return Vehiculo:: info()+ "Cantidad de puestos: " + to_string (this->cantPuestos);

    }
  
