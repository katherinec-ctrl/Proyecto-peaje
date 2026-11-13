#include "Carro.hpp"
#include "Propietario.hpp"
#include "Excepciones.hpp"
Carro:: Carro (string placa, Propietario* propietario, int cantPasajeros):Vehiculo(placa, propietario){
    if (cantPasajeros<1){
        throw DatosInvalidosException("Un carro debe tener por lo menos un pasajero");
    }
    {
        this->cantPasajeros=cantPasajeros;
    }
}

Carro::Carro (string placa, int cantPasajeros):Vehiculo(placa){
    if (cantPasajeros<1){
        throw DatosInvalidosException ("Un carro debe tener por lo menos un pasajero");
    }
    {
        this->cantPasajeros=cantPasajeros;
    }
}

Carro::~Carro(){
    cout <<"Destruyendo carro" << this-> placa << endl;
}

void Carro:: setCantPasajeros(int cantPasajeros){this->cantPasajeros=cantPasajeros;}

int Carro:: getCantPasajeros(){return this->cantPasajeros;}

void Carro:: agregarPasajero(){
    cantPasajeros++;
}

string Carro:: getTipo() const {
    return "Carro";
}

float Carro:: calcularTarifa() const {
    float tarifa =10000+200*5;
    if (getPropietario()!=nullptr&&getPropietario()->getEsVecino()==true){
        float descuento=0.35;
        return tarifa -= tarifa*descuento;
    }
    return tarifa;
}

string Carro:: info() const{
    return Vehiculo:: info() + "Cantidad de pasajeros:" + to_string (this->cantPasajeros);
}