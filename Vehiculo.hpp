#ifndef VEHICULO_HPP
#define VEHICULO_HPP
#include <string>
using namespace std;
class Propietario;

class Vehiculo{
    protected:
    string placa; 
    string color;
    int modelo;
    Propietario* propietario;
    public:
    Vehiculo();
    Vehiculo (string placa, string color, int modelo, Propietario* propietario);
    virtual ~Vehiculo();

    void setPlaca(string placa);
    void setColor (string color);
    void setModelo (int modelo);
    void setPropietario (Propietario* propietario);

    string getPlaca();
    string getColor();
    int getModelo();
    Propietario* getPropietario();

    virtual float calcularTarifa ()=0;
};