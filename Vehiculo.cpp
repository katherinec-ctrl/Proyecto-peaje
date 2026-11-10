#include "Vehiculo.hpp"
#include "Propietario.hpp"

    Vehiculo::Vehiculo(): placa ("no registrada"), modelo (0), color ("sin registrar"), propietario (nullptr){}
    Vehiculo::Vehiculo (string placa, string color, int modelo, Propietario* propietario):placa (placa),color (color),modelo (modelo),propietario (propietario){}
    Vehiculo::Vehiculo (string placa, string color, int modelo): placa (placa), color (color), modelo (modelo), propietario (nullptr){}
    Vehiculo::~Vehiculo(){}

    void Vehiculo:: setPlaca(string placa){this->placa=placa;}
    void Vehiculo:: setColor(string color){this->color = color;}
    void Vehiculo:: setModelo(int modelo){this->modelo=modelo;}
    void Vehiculo:: setPropietario (Propietario* propietario){this->propietario=propietario;}
   
    string Vehiculo:: getPlaca(){return this-> placa;}
    string Vehiculo:: getColor (){return this->color;}
    int Vehiculo:: getModelo(){return this->modelo;}
    Propietario* Vehiculo:: getPropietario(){return this->propietario;}