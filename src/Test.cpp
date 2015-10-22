#include "Test.h"
#include <iostream>
#include <string>
using namespace std;

void test(bool passed, string name, string x, string y){
    if (passed) cout << "Paso el test : " << name << " -> " << x << endl;
    else cout << "** Fallo **: " << name << " " << x << " != " << y << endl;
}

string to_s(int x){
  return to_string(x);
}
string to_s(bool x){
  if(x) return "true";
  else return "false";
}

namespace Test{
void assert_equal(string name, int x, int y)
{
  test((x == y), name, to_s(x), to_s(y));
}
void assert_true(string name, bool x)
{
  test((x == true), name, to_s(x), "true");
}
void assert_false(string name, bool x)
{
  test((x == false), name, to_s(x), "false");
}
}
