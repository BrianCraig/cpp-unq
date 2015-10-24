#include "Test.h"
#include <string>
#include <iostream>
using namespace std;

namespace Test {

TestNode::TestNode(string x) {
  inicializar(x, INFO::TODO);
};

TestNode::TestNode(string x, INFO i) {
  inicializar(x, i);
};

void TestNode::inicializar(string x, INFO i){
  info = i;
  nombre = x;
};


RutinaNode* TestNode::nuevaRutina(string x) {
  return TestNode::nuevaRutina(x, info);
};

RutinaNode* TestNode::nuevaRutina(string x, INFO i) {
  return new RutinaNode(x, i);
};

}
