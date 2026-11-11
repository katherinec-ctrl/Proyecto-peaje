#ifndef CAMION_HPP
#define CAMION_HPP
#include "Vehiculo.hpp"
#include <iostream>
using namespace std;
class Camion: public Vehiculo{
    private:
    int cantEjes;
    public:
    Camion (string placa, Propietario* propietario, int cantEjes=2);
    Camion (string placa, int cantEjes=2);

    void setCantEjes (int);
    int getCantEjes();
    void agregarEje();

    string getTipo() const override;
    float calcularTarifa () const override;
    string info() const override;


    
};
#endif