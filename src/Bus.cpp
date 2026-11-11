#include "Bus.hpp"
Bus::Bus(string placa, Propietario* propietario, int cantPuestos):
    Vehiculo (placa){
        if (cantPuestos<1){
            this->cantPuestos=1;
        }
        else{
            this->cantPuestos=cantPuestos;
        }
    }

Bus:: Bus (string placa, int cantPuestos):
    Vehiculo (placa){
        if (cantPuestos<1){
            this->cantPuestos=1;
        }
        else{
            this->cantPuestos=cantPuestos;
        }
        }

    void Bus:: setCantPuestos(int cantPuestos){this->cantPuestos=cantPuestos;}
    int Bus:: getCantPuestos(){return this->cantPuestos;}

    string Bus:: getTipo() const {
        return "Bus";
    }
    
    float Bus:: calcularTarifa() const {
        return 140000;
    }

    string Bus:: info() const {
        return Vehiculo:: info()+ "Cantidad de puestos: " + to_string (this->cantPuestos);

    }
  
