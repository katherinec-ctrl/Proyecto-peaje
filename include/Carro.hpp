#ifndef CARRO_HPP
#define CARRO_HPP
#include "Vehiculo.hpp"
#include <iostream>
using namespace std;
class Carro: public Vehiculo{
    private:
    int cantPasajeros;
    public:
    Carro (string placa, Propietario* propietario, int cantPasajeros=1);
    Carro (string placa,int cantPasajeros=1);
    ~Carro() override;
    void setCantPasajeros(int cantPasajeros);
    int getCantPasajeros();
    void agregarPasajero();
    
    string getTipo() const override;
    float calcularTarifa () const override;
    string info() const override;

};
#endif