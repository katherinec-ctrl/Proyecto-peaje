#include "Caseta.hpp"
#include "Operador.hpp"
#include "Carro.hpp"
#include "Moto.hpp"
#include "Camion.hpp"
#include "Bus.hpp"
#include <iostream>

using namespace std;

Caseta::Caseta(Operador* operador): 
operador(operador),totalCaja(0),cantV(0), cantC(0), cantM(0), cantB(0),cantCa(0){}
Caseta::~Caseta(){
cout <<"Liberando caseta..."<<endl;
}

void Caseta:: setOperador(Operador* operador){this->operador=operador;}
Operador* Caseta:: getOperador(){return this->operador;}
float Caseta:: getTotalCaja(){ return this->totalCaja;}
int Caseta:: getCantV(){ return this->cantV;}
int Caseta:: getCantC(){return this->cantC;}
int Caseta:: getCantM(){return this->cantM;}
int Caseta:: getCantB(){return this->cantB;}
int Caseta:: getCantCa(){return this->cantCa;}


void Caseta:: registrarPasoV (Vehiculo* vehiculo){
    if (vehiculo==nullptr){
        return;
    }
    string categoria= vehiculo->getTipo();
    float valorCobrado = vehiculo->calcularTarifa();
    Registro* nuevoRegistro = new Registro(vehiculo->getPlaca(), categoria, valorCobrado);
    registros.push_back(nuevoRegistro);
    totalCaja+=valorCobrado;
    cantV++;
    if (categoria =="Carro"){
        cantC++;
    }
    else if (categoria == "Moto"){
        cantM++;
    }
    else if (categoria == "Bus"){
        cantB++;
    }
    else if (categoria == "Camion"){
        cantCa ++;
    }
}


