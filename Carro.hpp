#ifndef CARRO_HPP
#define CARRO_HPP
#include "Vehiculo.hpp"
using namespace std;
class Carro: public Vehiculo{
    private:
    int cantPasajeros;
    public:
    Carro (string placa, string color, int modelo, Propietario* propietario, int cantPasajeros=1);
    Carro (string placa, string color, int modelo, int cantPasajeros=1);
    void setCantPasajeros(int cantPasajeros);
    int getCantPasajeros();
    float calcularTarifa () override;
    void agregarPasajero();
};
#endif