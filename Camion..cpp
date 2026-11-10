#include "Camion.hpp"

    Camion::Camion(string placa, string color, int modelo, Propietario* propietario, int cantEjes): 
    Vehiculo (placa, color, modelo) {
        if (cantEjes<2){
            this->cantEjes=2;
        }
        else{
            this->cantEjes=cantEjes;
        }
    }

    Camion:: Camion (string placa, string color, int modelo, int cantEjes):
    Vehiculo (placa, color, modelo){
        if (cantEjes<2){
            this->cantEjes=2;
        }
        else{
            this->cantEjes=cantEjes;
        }
    }

    void Camion:: setCantEjes(int cantEjes){this->cantEjes=cantEjes;}

    int Camion:: getCantEjes(){return this-> cantEjes;}

    float Camion:: calcularTarifa (){ 
        float tarifa= 8000 * cantEjes;
        return tarifa;
    }

    void Camion:: agregarEje(){
        cantEjes++;
    }