#ifndef I_FLIP_H
#define I_FLIP_H

#include "Instruction.h"

class I_flip : public Instruction{
private:
  int p;
  tstate x;
  tstate y;
  int seed;
public:
  int randomint();
};

#endif /* I_FLIP_H */

