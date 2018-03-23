/*
 * File:   Marker.h
 */

#ifndef MARKER_H
#define MARKER_H
#include "Cell.h"
#include "Structs.h"

class Marker{
private:
  int bits;
public:
  Marker();
  void set_marker(tmark mark, tcolor col);
  void clear_marker(tmark mark, tcolor col);
  bool check_marker(tmark mark, tcolor col);
  bool check_other_marker(tcolor col);
};

#endif /* MARKER_H */