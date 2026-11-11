#ifndef CASETA_HPP
#define CASETA_HPP
#include <vector>
#include <string>
#include "Registro.hpp"
#include "Vehiculo.hpp"
class Operador; 
using namespace std;
class Caseta{
    private:
    Operador* operador;
    vector <Registro*> registros;
    float totalCaja;
    int cantV;
    int cantC;
    int cantM;
    int cantB;
    int cantCa;
    public:
    Caseta (Operador* operador);
    void setOperador (Operador* operador);
    Operador* getOperador();
    void registrarPasoV(vegistro*> vregistros);

};
#endif
