#ifndef CASETA_HPP
#define CASETA_HPP
#include <vector>
#include <string>
#include "Registro.hpp"
#include "Vehiculo.hpp" 
#include "Operador.hpp"
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
    ~Caseta();

    void setOperador (Operador* operador);
    Operador* getOperador();
    float getTotalCaja();
    int getCantV();
    int getCantC();
    int getCantM();
    int getCantB();
    int getCantCa();
   
    void registrarPasoV(Vehiculo* vehiculo );

};
#endif
