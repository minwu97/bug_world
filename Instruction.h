#ifndef INSTRUCTION_H
#define INSTRUCTION_H

#include "Structs.h"
#include "Bug.h"
#include "World.h"

class Instruction{
protected:
  World W;
public:
  void execute(Bug b);
  void parse(std::string args);
};
#endif
