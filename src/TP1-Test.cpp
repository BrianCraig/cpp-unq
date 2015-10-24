#include <All-Tests.h>
#include <TP1.h>
#include <Test.h>
using namespace TP1;
using namespace Test;

void tp1_test(RutinaNode * r){
  r->deberiaSerIgual("deberia sumar bien", sumar(1,2), 3);
  r->deberiaSerIgual("deberia ser el sucesor", sucesor(2), 3);
  r->deberiaSerIgual("maximo debe ser 4", maximo(0,4), 4);
  r->deberiaSerIgual("maximo debe ser 5", maximo(5,4), 5);
  r->deberiaSerIgual("maximo debe ser 12", maximo(12,12), 12);
  r->deberiaSerFalso("negar un true es false", negar(true));
  r->deberiaSerVerdad("negar un false es true", negar(false));
  r->deberiaSerFalso("false and true es false", andLogico(false, true));
  r->deberiaSerVerdad("false or true es true", orLogico(false, true));
  int par [2] = {11, 22};
  r->deberiaSerIgual("el primero", primera(par), 11);
  r->deberiaSerIgual("el segundo", segunda(par), 22);
  r->deberiaSerIgual("la suma de los pares", sumaPar(par), 33);
  r->deberiaSerIgual("el maxim", maxDelPar(par), 22);
  r->deberiaSerIgual("siempre siete entero", siempreSiete((int *)9), 7);
  r->deberiaSerIgual("siempre siete cadena", siempreSiete((char *)"Texto"), 7);
  r->finalizar();
}
