#ifndef DIR_H
#define DIR_H

enum Rumbo {Oeste, Este, Sur, Norte};

class Dir {
public:
  Dir(Rumbo);
  bool es(Rumbo);
  bool operator == (const Dir&);
  bool operator == (Rumbo);
  void siguiente();
  void opuesto();
  Rumbo rumbo();
  ~Dir() {};
private:
  Rumbo rum;
};

#endif // DIR_H
