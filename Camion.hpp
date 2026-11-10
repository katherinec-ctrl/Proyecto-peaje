#ifndef CAMION_HPP
#define CAMION_HPP
#include "Vehiculo.hpp"
using namespace std;
class Camion: public Vehiculo{
    private:
    int cantEjes;
    public:
    Camion (string placa, string color, int modelo, Propietario* propietario, int cantEjes=2);
    Camion (string placa, string color, int modelo, int cantEjes=2);

    void setCantEjes (int);
    int getCantEjes();

    float calcularTarifa () override;
    void agregarEje();
};
#endif