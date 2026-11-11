#include "Vehiculo.hpp"

    Vehiculo::Vehiculo (string placa, Propietario* propietario){
        if (placa.length() <4){
            throw PlacaInvalidaException("Las placas no pueden tener menos de 4 caracteres");
        } else{
            this->placa=placa;
            this->propietario=propietario;
        }
    }
    Vehiculo::Vehiculo (string placa){
        if (placa.length()<4){
            throw PlacaInvalidaException("Las placas no pueden tener menos de 4 caracteres");
        }
        else{
            this->placa=placa;
            this->propietario=nullptr;
        }
    }
    Vehiculo::~Vehiculo(){
        cout <<"Destruyendo vehiculo "<< this->getPlaca()<< endl;
    }

    void Vehiculo:: setPlaca(string placa){this->placa=placa;}
    void Vehiculo:: setPropietario (Propietario* propietario){this->propietario=propietario;}
   
    string Vehiculo:: getPlaca() const {return this-> placa;}
    Propietario* Vehiculo:: getPropietario() const{return this->propietario;}

    string Vehiculo:: info() const{
        string info= this-> getTipo() + "con placa: " + this->getPlaca() + "\n";
        if (propietario != nullptr) {
            info += "Propietario: " + propietario->getNombre() + "\n";
        } else {
            info+= "Propietario: No asignado\n";
        }
        return info;
    }

    ostream& operator<<(ostream& os, Vehiculo &vehiculo){
        os << vehiculo.info();
        return os;
    }
