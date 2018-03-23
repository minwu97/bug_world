#ifndef I_TURN_H
#define I_TURN_H

#include "Instruction.h"

class I_turn: public Instruction{
private:
  tleftright lr;
  tstate z;
};

#endif /* I_TURN_H */

