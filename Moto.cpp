#include "Moto.hpp"
#include <iostream>

    Moto::Moto(string placa, string color, int modelo, Propietario* propietario, int cilindraje): 
    Vehiculo (placa, color, modelo, propietario),cilindraje(cilindraje) {}

    Moto::Moto (string placa, string color, int modelo, int cilindraje):
    Vehiculo (placa, color, modelo), cilindraje (cilindraje){}

    void Moto:: setCilindraje(int cilindraje){this->cilindraje=cilindraje;}

    int Moto:: getCilindraje(){return this-> cilindraje;}

    float Moto:: calcularTarifa (){ 
        float tarifa= 3000 + 100 * 5;
        if (getPropietario()!=nullptr&&getPropietario()->getEsVecino()==true){
            float descuento = 0.35;
            return tarifa -= tarifa*descuento;
        }
        return tarifa;
    }
    bool Moto:: esAltoCilindraje (int cilindraje){
        if (cilindraje>400){
            return true;
        }
        else{
            return false;
        }
    }

    void Moto:: informarAltoCilindraje(){
        if (esAltoCilindraje(cilindraje)==true){
            cout <<"La moto con placa "<<getPlaca()<<"es de alto cilindraje"<<endl;
        }
        }




