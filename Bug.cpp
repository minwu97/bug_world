/*
 * File:  Bug.cpp
 */

#include "Bug.h"

Bug::Bug(){ //create bug with default para
}

Bug::Bug(tcolor i_col, int i_progid, int i_resting){
  tcolor = i_col;
  prog_id = i_progid;
  resting = i_resting;
}

void Bug::start_resting(){
  resting = 1;
}

bool Bug::rested(){
  if(resting)
  return true;
  else
  return false;
}

int Bug::get_progid(){
  return prog_id;
}

tcolor Bug::get_color(){
  return color;
}

tstate Bug::get_state(){
  return state;
}

void Bug::set_state(tstate new_state){
  state = new_state;
}

tdirection Bug::get_direction(){
  return direction;
}

void Bug::set_direction(tdirection new_direction){
  direction = new_direction;
}

tposition Bug::get_position(){
  return pos;
}

void Bug::set_position(tposition new_position){
  pos = new_position;
}

bool Bug::get_food(){
  return food;
}

void Bug::set_food(bool new_food){
  food = new_food;
}

bool Bug::is_dead(){
  return dead;
}

void Bug::kill(){
  dead = 1;
}
