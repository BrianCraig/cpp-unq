#include <Test.h>
#include <Lista.h>
#include <string>
#include <iostream>
using namespace std;

namespace Test {

RutinaNode::RutinaNode(string n, INFO i){
  info = i;
  nombre = n;
  unidades = new Lista;
  total = 0;
  pasaron = 0;
  mostrarCabecera();
}

void RutinaNode::agregarUnidad(UnidadInt * x){
   unidades->append(x);
   total++;
   if(x->haPasado()) pasaron++;
   switch(info){
     case INFO::TODO:
     x->informe();
     break;
     case INFO::ERRORES:
     if(!x->haPasado())x->informe();
     break;
   }
}

void RutinaNode::agregarUnidad(UnidadBool * x){
   unidades->append(x);
   total++;
   if(x->haPasado()) pasaron++;
   switch(info){
     case INFO::TODO:
     x->informe();
     break;
     case INFO::ERRORES:
     if(!x->haPasado())x->informe();
     break;
   }
}

void RutinaNode::mostrarCabecera(){
  if ((info == INFO::RESUMEN) || (info == INFO::TODO)) cout << "/** Rutina: " << nombre  << " **\\" << endl;
}

void RutinaNode::finalizar(){
  if ((info == INFO::RESUMEN) || (info == INFO::TODO)) cout << "\\** pasaron " << pasaron  << "/" << total  << " **/" << endl <<endl;
  if ((info == INFO::ERRORES) && (total!=pasaron)) cout << "\\** pasaron " << pasaron  << "/" << total << " en la rutina "  << nombre << " **/" << endl <<endl;
}

void RutinaNode::deberiaSerVerdad(string n, bool x) {
  agregarUnidad(new UnidadBool(n, x, true));
}
void RutinaNode::deberiaSerFalso(string n, bool x) {
  agregarUnidad(new UnidadBool(n, x, false));
}
void RutinaNode::deberiaSerIgual(string n, int x, int y) {
 agregarUnidad(new UnidadInt(n, x, y));
}

}
