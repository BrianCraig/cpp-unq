#include "Lista.h"

struct ListaNode {
  void * valor;
  ListaNode * siguiente;
  bool fin;
};
typedef ListaNode * Node;

Lista::Lista()
{
   lista = new ListaNode;
   lista->fin = true;
}

Lista::~Lista()
{
  while (!isEmpty()){detachHead();}
}

void Lista::detachHead(){
  Node a = lista;
  lista = lista->siguiente;
  delete a;
}

bool Lista::isEmpty(){
  return lista->fin;
}

void * Lista::head(){
  return lista->valor;
}

void Lista::append(void * valor){
  Node a = new ListaNode;
  a->valor = valor;
  a->fin = false;
  a->siguiente = lista;
  lista = a;
}
