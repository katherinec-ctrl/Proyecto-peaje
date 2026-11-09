#include "Moto.hpp"
#include "Vehiculo.hpp"
using namespace std;

    Moto::Moto(string placa, string color, int modelo,int cilindraje, bool esAltoCilindraje): 
    Vehiculo (placa, color, modelo),cilindraje(cilindraje), esAltoCilindraje (esAltoCilindraje) {}

    void Moto:: setCilindraje(int cilindraje){this->cilindraje=cilindraje;}

    int Moto:: getCilindraje(){return this-> cilindraje;}

    float Moto:: calcularTarifa (){ 
        if (cilindraje<=100){
            return 2500;
        }
        else {
            return 3500;
        }
    }

