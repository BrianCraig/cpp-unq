#include <All-Tests.h>
#include <Dir.h>
#include <Test.h>
using namespace Test;

void dir_test(RutinaNode * r) {
  Dir* a = new Dir(Rumbo::Este);
  Dir* b = new Dir(Rumbo::Oeste);
  r->deberiaSerVerdad("Dir a deberia ser este", a->es(Rumbo::Este));
  r->deberiaSerFalso("Dir a deberia no ser oeste", a->es(Rumbo::Oeste));
  r->deberiaSerFalso("Dir a deberia no ser igual a Dir b", (*a==*b));
  b->opuesto();
  r->deberiaSerVerdad("Dir a deberia ser igual a Dir b",(*a==*b));
  r->deberiaSerVerdad("Rumbo a deberia retornar Este",(a->rumbo() == Rumbo::Este));
  b->siguiente();
  b->siguiente();
  b->siguiente();
  r->deberiaSerVerdad("Rumbo b deberia ser norte",b->es(Rumbo::Norte));
  r->finalizar();
}
