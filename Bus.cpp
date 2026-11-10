#include "Bus.hpp"
Bus::Bus(string placa, string color, int modelo, Propietario* propietario, int cantPuestos):
    Vehiculo (placa, color, modelo){
        if (cantPuestos<1){
            this->cantPuestos=1;
        }
        else{
            this->cantPuestos=cantPuestos;
        }
    }

Bus:: Bus (string placa, string color, int modelo, int cantPuestos):
    Vehiculo (placa, color, modelo){
        if (cantPuestos<1){
            this->cantPuestos=1;
        }
        else{
            this->cantPuestos=cantPuestos;
        }
        }

    void Bus:: setCantPuestos(int cantPuestos){this->cantPuestos=cantPuestos;}
    int Bus:: getCantPuestos(){return this->cantPuestos;}

    float Bus:: calcularTarifa(){
        return 140000;
    }

