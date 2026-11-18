#include ifndef EMERGENCIA_HPP
#include Emergencia_HPP
#include <string>
using namespace std;
class Emergencia{
protected:
string unidad;
string descrip;
bool estado;
oublic:
Emergencia(string unidad, string descrip);
void setUnidad(string unidad);
void setDescrip(string descrip);
void setEstado(bool estado);
string getUnidad();
string getDescrip();
bool getEstado();
};
#endif
