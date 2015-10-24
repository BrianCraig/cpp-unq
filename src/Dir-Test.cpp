#include <All-Tests.h>
#include <Dir.h>
#include <Test.h>
using namespace Test;

void dir_test(RutinaNode * r) {
  Dir* a = new Dir();
  Dir* b = new Dir();
  a->este();
  b->oeste();
  r->deberiaSerVerdad("Dir a deberia ser este", a->esEste());
  r->deberiaSerFalso("Dir a deberia no ser oeste", a->esOeste());
  r->deberiaSerFalso("Dir a deberia no ser igual a Dir b", (*a==*b));
  b->opuesto();
  r->deberiaSerVerdad("Dir a deberia ser igual a Dir b",(*a==*b));
  r->finalizar();
}
