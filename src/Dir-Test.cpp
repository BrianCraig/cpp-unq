#include <All-Tests.h>
#include <Dir.h>
#include <Test.h>
using namespace Test;

void dir_test() {
  Dir* a = new Dir();
  Dir* b = new Dir();
  a->este();
  b->oeste();
  assert_true("Dir a deberia ser este", a->esEste());
  assert_false("Dir a deberia no ser oeste", a->esOeste());
  assert_false("Dir a deberia no ser igual a Dir b", (*a==*b));
  b->opuesto();
  assert_true("Dir a deberia ser igual a Dir b",(*a==*b));
}
