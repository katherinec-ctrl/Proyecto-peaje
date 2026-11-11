#ifndef SISTEMA_HPP
#define SISTEMA_HPP
#include <vector>
using namespace std;
class Caseta;
class Vehiculo;
class Sistema{
    private:
    Caseta*caseta;
    public: 
    void registrarPasoVehiculos(vector<Vehiculo*> vehiculos, Caseta* caseta);

};
#endif