#ifndef I_PICKUP_H
#define I_PICKUP_H

#include "Instruction.h"

class I_pickup: public Instruction{
private:
  tstate x;
  tstate y;
};

#endif /* I_PICKUP_H */

