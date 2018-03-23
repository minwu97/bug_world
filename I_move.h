#ifndef I_MOVE_H
#define I_MOVE_H

#include "Instruction.h"

class I_move: public Instruction{
private:
  tstate x;
  tstate y;
};

#endif /* I_MOVE_H */

