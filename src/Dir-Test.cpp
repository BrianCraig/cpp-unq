#include <Dir.h>
#include <iostream>
using namespace std;

int main() {
  Dir* a = new Dir();
  Dir* b = new Dir();
  a->este();
  b->oeste();
  cout << "a deberia ser este: " << a->esEste() << endl;
  cout << "a deberia no ser oeste: " << !a->esOeste() << endl;
  cout << "a deberia no ser igual a b: " << !(*a==*b) << endl;
  b->opuesto();
  cout << "a deberia ser igual a b: " << (*a==*b) << endl;
  return 0;
}
