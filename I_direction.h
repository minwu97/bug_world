#ifndef I_DIRECTION_H
#define I_DIRECTION_H

#include "Instruction.h"

class I_direction: public Instruction{
private:
  tdirection d;
  tstate x;
  tstate y;
};
#endif 
