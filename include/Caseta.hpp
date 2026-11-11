#ifndef CASETA_HPP
#define CASETA_HPP
#include <vector>
class Operador;
class Vehiculo; 
using namespace std;
class Caseta{
    private:
    Operador* operador;
    vector <Vehiculo*> vehiculos;
    public:
    Caseta (Operador* operador);
    void setOperador (Operador* operador);
    Operador* getOperador();
    registrarVehiculo(vector <Vehiculo*> vehiculos);

};
#endif
