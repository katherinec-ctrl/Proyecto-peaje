#ifndef VEHICULO_HPP
#define VEHICULO_HPP
#include "Propietario.hpp"
#include <string>
#include <iostream>
using namespace std;

class Vehiculo{
    protected:
    string placa; 
    Propietario* propietario;
    public:
    Vehiculo (string placa,Propietario* propietario);
    Vehiculo (string placa);
    virtual ~Vehiculo();

    void setPlaca(string placa);
    void setPropietario (Propietario* propietario);

    string getPlaca() const;
    Propietario* getPropietario() const;

    virtual string getTipo() const = 0;
    virtual float calcularTarifa () const =0;
    virtual string info() const;
;
};
ostream& operator<<(ostream& os, Vehiculo &vehiculo);
#endif