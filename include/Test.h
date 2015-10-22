#include <string>
using std::string;

#ifndef TEST_H
#define TEST_H


namespace Test{
  void assert_equal(string, int, int);
  void assert_true(string, bool);
  void assert_false(string, bool);
}

#endif // TEST_H
