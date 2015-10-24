#include "Dir.h"

Dir::Dir(Rumbo r) {
  rum = r;
}

bool Dir::operator== (const Dir& o) {
  return (rum == o.rum);
}
bool Dir::operator== (Rumbo o) {
  return (rum == o);
}

bool Dir::es(Rumbo o){
  return (rum == o);
}

Rumbo Dir::rumbo(){
  return rum;
}

void Dir::siguiente () {
  if(rum == Rumbo::Este) rum = Rumbo::Sur;
  else if(rum == Rumbo::Sur) rum = Rumbo::Oeste;
  else if(rum == Rumbo::Oeste) rum = Rumbo::Norte;
  else if(rum == Rumbo::Norte) rum = Rumbo::Este;
}

void Dir::opuesto () {
  if(rum == Rumbo::Este) rum = Rumbo::Oeste;
  else if(rum == Rumbo::Sur) rum = Rumbo::Norte;
  else if(rum == Rumbo::Oeste) rum = Rumbo::Este;
  else if(rum == Rumbo::Norte) rum = Rumbo::Sur;
}
