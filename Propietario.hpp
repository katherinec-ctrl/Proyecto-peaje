#ifndef PROPIETARIO_HPP
#define PROPIETARIO_HPP
#include "Persona.hpp"
class Propietario: public Persona{
    private:
    bool esVecino;
    public:
    Propietario (string nombre, string documento, string descrip, bool esVecino)
    void setEsVecino(bool esVecino);
    bool getEsVecino();
};
#endif