#include <string>
#include "Pokemon.h"

namespace Pokemon {

namespace Tipo {
bool vence(Tipo a,Tipo b) {
  switch(a) {
  case Tipo::AGUA:
    return (b==Tipo::FUEGO) ;
  case Tipo::FUEGO:
    return (b==Tipo::PLANTA) ;
  case Tipo::PLANTA:
    return (b==Tipo::AGUA) ;
  }
}
}

struct PokeNode {
  std::string nombre;
  Tipo::Tipo tipo;
  int nivel;
};
typedef PokeNode* Pokemon;

Pokemon crear(std::string n, Tipo::Tipo t) {
  Pokemon x = new PokeNode;
  x->nombre = n;
  x->tipo = t;
  x->nivel = 1;
  return x;
}

std::string nombre(Pokemon p){
  return p->nombre;
}

Tipo::Tipo tipo(Pokemon p){
  return p->tipo;
}

int nivel(Pokemon p){
  return p->nivel;
}

void subirNivel(Pokemon p){
  p->nivel++;
}

bool mismoTipo(Pokemon p, Pokemon v){
  return (p->tipo == v->tipo);
}

bool esVencedorTipo(Pokemon p,Pokemon v){
  return Tipo::vence(p->tipo, v->tipo);
}

bool esVencedorNivel(Pokemon p, Pokemon v){
  return (p->nivel > v->nivel);
}

bool leGanaA(Pokemon p, Pokemon v){
  return esVencedorTipo(p, v) ? true : (mismoTipo(p, v) && esVencedorNivel(p, v));
}

}
