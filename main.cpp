#include <All-Tests.h>
#include <Test.h>
using namespace Test;

int main(){
  TestNode * t = new TestNode("Test General de La aplicacion UNQ", INFO::TODO);
  pokemon_test(t->nuevaRutina("Pokemons", INFO::RESUMEN));
  dir_test(t->nuevaRutina("Direccion", INFO::RESUMEN));
  tp1_test(t->nuevaRutina("TP1 tests", INFO::ERRORES));
  tree_test(t->nuevaRutina("Tree", INFO::ERRORES));
  return 0;
}
