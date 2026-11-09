#include "Carro.hpp"
#include "Vehiculo.hpp"
Carro:: Carro (string placa, string color, int modelo, int cantPasajeros):Vehiculo(placa, color, modelo),cantPasajeros(1){}

void Carro:: setCantPasajeros(int cantPasajeros){this->cantPasajeros=cantPasajeros;}

int Carro:: getCantPasajeros(){return this->cantPasajeros;}

float Carro:: calcularTarifca(){
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

