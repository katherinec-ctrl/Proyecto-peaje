#include "Moto.hpp"
#include "Propietario.hpp"
#include "Excepciones.hpp"
#include <iostream>

    Moto::Moto(string placa, Propietario* propietario, int cilindraje): 
    Vehiculo (placa, propietario){
        if (cilindraje <=0){
            throw DatosInvalidosException("El cilindraje de una moto debe ser mayor a 0");
        }
        this->cilindraje =cilindraje;
    }

    Moto::Moto (string placa, int cilindraje):
    Vehiculo (placa){
        if (cilindraje <=0){
            throw DatosInvalidosException("El cilindraje de una moto debe ser mayor a 0");
        }
        this->cilindraje =cilindraje;
    }

    Moto:: ~Moto(){
        cout << "Destruyendo moto" << this->placa <<endl;
    }

    void Moto:: setCilindraje(int cilindraje){this->cilindraje=cilindraje;}

    int Moto:: getCilindraje(){return this-> cilindraje;}

  
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

    string Moto:: getTipo()const{
        return "Moto";
    }
  float Moto:: calcularTarifa () const{ 
        float tarifa= 3000 + 100 * 5;
        if (getPropietario()!=nullptr&&getPropietario()->getEsVecino()==true){
            float descuento = 0.35;
            return tarifa -= tarifa*descuento;
        }
        return tarifa;
    }
    string Moto:: info() const{
        return Vehiculo:: info() + "Cilindraje: " + to_string (this-> cilindraje);
    }






