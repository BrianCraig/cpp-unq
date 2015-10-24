#include <string>
#include <Lista.h>
using std::string;

#ifndef TEST_H
#define TEST_H


namespace Test{
  enum INFO{TODO, RESUMEN, ERRORES, NADA};

  class Unidad {
  public:
    bool haPasado();
  protected:
     bool paso;
     string descripcion;
  };

   class UnidadBool : public Unidad {
   public:
      UnidadBool(string, bool, bool);
      void informe();
   protected:
      bool ingresado;
      bool esperado;
   };
   class UnidadInt : public Unidad{
   public:
     UnidadInt(string, int, int);
     void informe();
   protected:
      int ingresado;
      int esperado;
   };

  class RutinaNode {
  public:
    RutinaNode(string, INFO);
    bool mostrarResultados();
    void deberiaSerVerdad(string, bool);
    void deberiaSerFalso(string, bool);
    void deberiaSerIgual(string, int, int);
    void finalizar();
  private:
    void agregarUnidad(UnidadInt *);
    void agregarUnidad(UnidadBool *);
    void mostrarCabecera();
    INFO info;
    string nombre;
    Lista * unidades;
    int total;
    int pasaron;

  };

  class TestNode {
  public:
    TestNode(string, INFO);
    TestNode(string);
    RutinaNode * nuevaRutina(string);
    RutinaNode * nuevaRutina(string, INFO);
  private:
    INFO info;
    string nombre;
    void inicializar(string, INFO);
  };
}

#endif // TEST_H
