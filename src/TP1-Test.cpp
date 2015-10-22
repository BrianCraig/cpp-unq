#include <All-Tests.h>
#include <TP1.h>
#include <Test.h>
using namespace TP1;
using namespace Test;

void tp1_test(){
  assert_equal("deberia sumar bien", sumar(1,2), 3);
  assert_equal("deberia ser el sucesor", sucesor(2), 3);
  assert_equal("maximo debe ser 4", maximo(0,4), 4);
  assert_equal("maximo debe ser 5", maximo(5,4), 5);
  assert_equal("maximo debe ser 12", maximo(12,12), 12);
  assert_false("negar un true es false", negar(true));
  assert_true("negar un false es true", negar(false));
  assert_false("false and true es false", andLogico(false, true));
  assert_true("false or true es true", orLogico(false, true));
  int par [2] = {11, 22};
  assert_equal("el primero", primera(par), 11);
  assert_equal("el segundo", segunda(par), 22);
  assert_equal("la suma de los pares", sumaPar(par), 33);
  assert_equal("el maxim", maxDelPar(par), 22);
  assert_equal("siempre siete entero", siempreSiete((int *)9), 7);
  assert_equal("siempre siete cadena", siempreSiete((char *)"Texto"), 7);
}
