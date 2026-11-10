#ifndef PERSONA_HPP
#define PERSONA_HPP
#include <string>
using namespace std;
class Persona{
    protected:
    string nombre;
    string documento;
    string descrip; 
    public:
    Persona (string nombre, string documento, string descrip);
    void setNombre(string nombre);
    void setDocumento (string documento);
    void setDescrip (string descrip);
    string getNombre();
    string getDocumento();
    string getDescrip();
};
#endif