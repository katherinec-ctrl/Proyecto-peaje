#ifndef MOTO_HPP
#define MOTO_HPP
#include "Vehiculo.hpp"
using namespace std;
class Moto: public Vehiculo{
    private:
    int cilindraje;

    public:
    Moto (string placa, string color, int modelo, Propietario* propietario, int cilindraje);
    Moto (string placa, string color, int modelo, int cilindraje);

    void setCilindraje (int);
    int getCilindraje ();

    float calcularTarifa () override;
    bool esAltoCilindraje(int cilindraje);
    void informarAltoCilindraje();
};
#endif