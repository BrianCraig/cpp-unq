#include "Dir.h"

Dir::Dir() {
  direction = 4;
}

bool Dir::operator== (const Dir& o) {
  return (direction != 4) && (direction == o.direction);
}

void Dir::siguiente () {
  direction++;
  if (direction==4) {
    direction=0;
  }
}

void Dir::opuesto () {
  switch (direction) {
  case 0:
  case 1:
    direction += 2;
    break;
  case 2:
  case 3:
    direction -= 2;
    break;
  }
}
