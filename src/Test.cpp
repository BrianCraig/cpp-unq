#include "Test.h"
#include <iostream>
#include <string>
using namespace std;

void test(bool passed, char* name, std::string x, std::string y){
    if (passed) cout << "Paso el test : " << name << " -> " << x << endl;
    else cout << "** Fallo **: " << name << " " << x << " != " << y << endl;
}

std::string to_s(int x){
  return std::to_string(x);
}
std::string to_s(bool x){
  if(x) return "true";
  else return "false";
}

namespace Test{
void assert_equal(char* name, int x, int y)
{
  test((x == y), name, to_s(x), to_s(y));
}
void assert_true(char* name, bool x)
{
  test((x == true), name, to_s(x), "true");
}
void assert_false(char* name, bool x)
{
  test((x == false), name, to_s(x), "false");
}
}
