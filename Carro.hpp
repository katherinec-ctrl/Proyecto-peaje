#ifndef CARRO_HPP
#define CARRO_HPP
#include "Vehiculo.hpp"
using namespace std;
class Carro: public Vehiculo{
    private:
    int cantPasajeros;
    public:
    Carro (string placa, string color, int modelo, int cantPasajeros);
    void setCantPasajeros(int cantPasajeros);
    int getCantPasajeros();
    float calcularTarifca () override;
    void agregarPasajero();
};