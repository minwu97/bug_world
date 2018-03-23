#ifndef I_SENSE_H
#define I_SENSE_H

#include "Instruction.h"

class I_sense: public Instruction{
private:
  tsensedir dir;
  tstate x;
  tstate y;
  tcondition condition;
};

#endif /* I_SENSE_H */

