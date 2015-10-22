#include <All-Tests.h>
#include <Pokemon.h>
#include <Test.h>
using namespace Pokemon;
using namespace Test;

void pokemon_test() {
  // tipo tests
  Tipo::Tipo ta = Tipo::Tipo::AGUA;
  Tipo::Tipo tf = Tipo::Tipo::FUEGO;
  Tipo::Tipo tp = Tipo::Tipo::PLANTA;
  assert_true("agua vence a fuego", Tipo::vence(ta, tf));
  assert_false("fuego no vence a agua", Tipo::vence(tf,ta));
  assert_false("planta no vence a fuego", Tipo::vence(tp,tf));
  assert_false("planta no vence a planta", Tipo::vence(tp,tp));
  // pokemon tests
  Pokemon::Pokemon p_g = crear("Goldeen", ta);
  Pokemon::Pokemon p_c = crear("Chikorita", tp);
  Pokemon::Pokemon p_b = crear("Bulbasour", tp);
  assert_false("Golden lvl 1 no le gana a Chikorita lvl 1",leGanaA(p_g, p_c) );
  assert_true("P tipo planta es vencedor de tipo de P tipo agua", esVencedorTipo(p_c, p_g));
  subirNivel(p_c);
  subirNivel(p_c);
  assert_equal("Chikorita lvl debe ser 3 ", nivel(p_c), 3);
  assert_equal("Bulbasur lvl debe ser 1 ", nivel(p_b), 1);
  assert_true("Chikorita lvl 3 le gana a Bulbasur lvl 1", leGanaA(p_c, p_b));
  assert_true("Chikorita lvl 3 tiene mas nivel que Bulbasur lvl 1", esVencedorNivel(p_c, p_b));
  assert_false("Pero no al revez", esVencedorNivel(p_b, p_c));
  assert_false("Ni dos lvl 1", esVencedorNivel(p_g, p_b));
}
