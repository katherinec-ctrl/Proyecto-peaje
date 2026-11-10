#ifndef BUS_HPP
#define BUS_HPP
#include "Vehiculo.hpp"
using namespace std;
class Bus: public Vehiculo{
    private:
    int cantPuestos;
    public:
    Bus (string placa, string color, int modelo, Propietario* propietario, int cantPuestos=1);
    Bus (string placa, string color, int modelo, int cantPuestos=1);
    void setCantPuestos(int cantPuestos);
    int getCantPuestos();
    float calcularTarifa()override;
};
#endif