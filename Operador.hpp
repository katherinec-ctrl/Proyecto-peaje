#ifndef OPERADOR_HPP
#define OPERADOR_HPP
#include "persona.hpp"
class Operador:public Persona{
    private:
    string id;
    public:
    Operador (string nombre, string documento, string descrip;string id);
    void setId(string id);
    string getId();
};