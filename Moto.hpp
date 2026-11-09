c:\Users\sofia\Desktop\Proyecto peaje\Encabezado\Vehiculo.hpp#pragma once
#include <string>
#include "Vehiculo.hpp"
using namespace std;
class Moto: public Vehiculo{
    private:
    int cilindraje;

    public:
    Moto (string placa, string color, int modelo,int cilindraje);

    void setCilindraje (int);
    int getCilindraje ();

    float calcularTarifa () override;

};