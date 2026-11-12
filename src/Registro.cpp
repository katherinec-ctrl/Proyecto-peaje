#include "Registro.hpp"
Registro:: Registro (string placa, string categoria, float valorCobrado): placa (placa), categoria (categoria), valorCobrado(valorCobrado){}
Registro:: ~Registro(){
    cout <<"Destruyendo registro de"<< this->placa <<endl;
}
string Registro:: getPlaca(){return this-> placa;}
string Registro:: getCategoria(){return this-> categoria;}
float Registro:: getValorCobrado(){return this->valorCobrado;}


