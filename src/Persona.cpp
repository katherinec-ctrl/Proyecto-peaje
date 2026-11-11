# include "Persona.hpp"
Persona:: Persona (string nombre,string documento, string descrip): nombre(nombre), documento(documento),descrip(descrip){}

void Persona:: setNombre (string nombre){this->nombre=nombre;}
void Persona:: setDocumento (string documento){this->documento=documento;}
void Persona:: setDescrip (string descrip){this->descrip=descrip;}

string Persona:: getNombre (){return this->nombre;}
string Persona:: getDocumento(){return this->documento;}
string Persona:: getDescrip(){return this->descrip;}