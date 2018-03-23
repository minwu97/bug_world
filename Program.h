#ifndef PROGRAM_H
#define PROGRAM_H

#include "Bug.h"

class Program: public Bug{
private:
  int id;

public:
  Program(std::string filename);
  void step(Bug b);
};
#endif /* PROGRAM_H */