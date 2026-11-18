#include "Emergencia.hpp"
Emergencia::Emergencia (string unidad, string descrip){
this->unidad=unidad;
this->descrip=descrip;
this->Estado=false;
}
void Emergencia:: setUnidad(string unidad){this->unidad=unidad);
void Emergencia:: setDescrip(string descrip){this->descrip=descrip);
void Emergencia:: setEstado (bool estado) {this->estado=estado};

string Emergencia:: getUnidad(){return this->unidad;}
string Emergencia:: getDescrip(){return this->descrip;}
bool Emergencia:: getEstado(){return this->estado;}



