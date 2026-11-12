#ifndef REGISTRO_HPP
#define REGISTRO_HPP
#include <iostream>
#include <string>
using namespace std;
class Registro{
    private:
    string placa;
    string categoria;
    float valorCobrado;
    public: 
    Registro (string placa, string categoria, float valorCobrado);
    ~Registro();
    string getPlaca();
    string getCategoria();
    float getValorCobrado();
};
#endif