#include "Camion.hpp"

    Camion::Camion(string placa, Propietario* propietario, int cantEjes): 
    Vehiculo (placa, propietario) {
        if (cantEjes<2){
            this->cantEjes=2;
        }
        else{
            this->cantEjes=cantEjes;
        }
    }

    Camion::Camion(string placa, int cantEjes):
    Vehiculo (placa){
        if (cantEjes<2){
            this->cantEjes=2;
        }
        else{
            this->cantEjes=cantEjes;
        }
    }

    void Camion:: setCantEjes(int cantEjes){this->cantEjes=cantEjes;}

    int Camion:: getCantEjes(){return this-> cantEjes;}

    Camion:: ~Camion(){
       cout << "Destruyendo camión" << this-> placa << endl;
    }

    void Camion:: agregarEje(){
        cantEjes++;
    }

    string Camion:: getTipo() const{
        return "Camion";
    }

    float Camion:: calcularTarifa () const{ 
        float tarifa= 8000 * cantEjes;
        return tarifa;
    }

    string Camion:: info() const{
        return Vehiculo:: info()+ "Cantidad de ejes:" + to_string (this-> cantEjes);
    }

