#ifndef BUS_HPP
#define BUS_HPP
#include "Vehiculo.hpp"
#include <iostream>
using namespace std;
class Bus: public Vehiculo{
    private:
    int cantPuestos;
    public:
    Bus (string placa, Propietario* propietario, int cantPuestos);
    Bus (string placa, int cantPuestos);
    ~Bus() override;
    void setCantPuestos(int cantPuestos);
    int getCantPuestos();
    
    
    string getTipo() const override;
    float calcularTarifa () const override;
    string info() const override;

};
#endif