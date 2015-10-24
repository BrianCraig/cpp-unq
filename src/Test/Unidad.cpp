#include "Test.h"
#include <string>
#include <iostream>
using namespace std;

string to_s(int x){
  return to_string(x);
}

string to_s(bool x){
  if(x) return "true";
  else return "false";
}

namespace Test {

UnidadBool::UnidadBool(string s, bool x, bool y) {
  paso = (x==y);
  descripcion = s;
  ingresado = x;
  esperado = x;
}

UnidadInt::UnidadInt(string s, int x, int y) {
  paso = (x==y);
  descripcion = s;
  ingresado = x;
  esperado = x;
}

bool Unidad::haPasado(){
  return paso;
}

void UnidadBool::informe(){
  if (haPasado()) cout << "Paso el test : " << descripcion << " -> " << to_s(ingresado) << endl;
  else cout << "** Fallo **: " << descripcion << " " << to_s(ingresado) << " != " << to_s(esperado) << endl;
}
void UnidadInt::informe(){
  if (haPasado()) cout << "Paso el test : " << descripcion << " -> " << to_s(ingresado) << endl;
  else cout << "** Fallo **: " << descripcion << " " << to_s(ingresado) << " != " << to_s(esperado) << endl;
}

}
