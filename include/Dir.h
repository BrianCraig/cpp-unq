#ifndef DIR_H
#define DIR_H

class Dir {
public:
  Dir();
  int Getdirection() {
    return direction;
  }
  bool esEste() {
    return direction == 0;
  }
  bool esSur() {
    return direction == 1;
  }
  bool esOeste() {
    return direction == 2;
  }
  bool esNorte() {
    return direction == 3;
  }
  void este() {
    direction = 0;
  }
  void sur() {
    direction = 1;
  }
  void oeste() {
    direction = 2;
  }
  void norte() {
    direction = 3;
  }
  bool operator == (const Dir&);
  void siguiente();
  void opuesto();
protected:
private:
  int direction;
};

#endif // DIR_H
