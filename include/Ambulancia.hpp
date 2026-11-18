#ifndef AMBULANCIA_HPP
#define AMBULANCIA_HPP
#include "Vehiculo.hpp"
using namespace std;
class Ambulancia: public Vehiculo, public Emergencia{
public:
Ambulancia (string placa, string unidad, string descrip);
~Ambulancia();
string getTipo() const override;
float calcularTaeifa () const override;
string info () const override;
};
#endif 
