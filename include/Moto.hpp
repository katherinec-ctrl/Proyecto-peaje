#ifndef MOTO_HPP
#define MOTO_HPP
#include "Vehiculo.hpp"
using namespace std;
class Moto: public Vehiculo{
    private:
    int cilindraje;

    public:
    Moto (string placa,Propietario* propietario, int cilindraje);
    Moto (string placa,int cilindraje);
    ~Moto() override;

    void setCilindraje (int);
    int getCilindraje ();

    bool esAltoCilindraje(int cilindraje);
    void informarAltoCilindraje();  
    
    string getTipo() const override {}
    float calcularTarifa () const override;
    string info() const override;
};
#endif