#include <string>
#ifndef POKEMON_H
#define POKEMON_H


namespace Pokemon {
  namespace Tipo {
  enum Tipo {AGUA, FUEGO, PLANTA};
  bool vence(Tipo,Tipo);
  }
struct PokeNode;
typedef PokeNode * Pokemon;
Pokemon crear(std::string, Tipo::Tipo);

std::string nombre(Pokemon);
Tipo::Tipo tipo(Pokemon);
int nivel(Pokemon);

void subirNivel(Pokemon);
bool mismoTipo(Pokemon, Pokemon);
bool esVencedorTipo(Pokemon,Pokemon);
bool esVencedorNivel(Pokemon, Pokemon);
bool leGanaA(Pokemon, Pokemon);

}

#endif // POKEMON_H
