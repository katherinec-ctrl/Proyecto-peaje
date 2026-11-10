#include "Carro.hpp"
Carro:: Carro (string placa, string color, int modelo, Propietario* propietario, int cantPasajeros):Vehiculo(placa, color, modelo, propietario){
    if (cantPasajeros<1){
        this->cantPasajeros=1;
    }
    else{
        this->cantPasajeros=cantPasajeros;
    }
}

Carro::Carro (string placa, string color, int modelo, int cantPasajeros):Vehiculo(placa, color,modelo){
    if (cantPasajeros<1){
        this->cantPasajeros=1;
    }
    else{
        this->cantPasajeros=cantPasajeros;
    }
}

void Carro:: setCantPasajeros(int cantPasajeros){this->cantPasajeros=cantPasajeros;}

int Carro:: getCantPasajeros(){return this->cantPasajeros;}

float Carro:: calcularTarifa(){
    float tarifa =10000+200*5;
    if (getPropietario()!=nullptr&&getPropietario()->getEsVecino()==true){
        float descuento=0.35;
        return tarifa -= tarifa*descuento;
    }
    return tarifa;
}

void Carro:: agregarPasajero(){
    cantPasajeros++;
}

