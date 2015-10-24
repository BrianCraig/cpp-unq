#ifndef LISTA_H
#define LISTA_H

struct ListaNode ;
class Lista
{
  public:
    Lista();
    ~Lista();
    void * head();
    int length();
    bool isEmpty();
    void append(void *);
    void detachHead();
  protected:
  private:
    ListaNode * lista;
};

#endif // LISTA_H
