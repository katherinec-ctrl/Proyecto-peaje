#include "Propietario.hpp"
Propietario:: Propietario (string nombre, string documento, string descrip, bool esVecino): Persona (nombre, documento,descrip), esVecino(esVecino){}

void Propietario:: setEsVecino(bool esVecino){this-> esVecino=esVecino;}
bool Propietario:: getEsVecino(){return this->esVecino;}
