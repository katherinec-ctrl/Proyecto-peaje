#include "operador.hpp"
Operador::Operador(string nombre, string documento, string descrip, string id):Persona(nombre, documento, descrip), id(id){}
void Operador:: setId(string id){this->id=id;}
string Operador:: getId(){return this->id;}