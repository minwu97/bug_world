/* 
 * File:   Bug.h
 */

#ifndef BUG_H
#define BUG_H
#include "Cell.h"
#include "Exception.h"
#include "Structs.h"
#include "World.h"

class Bug{
private:
    tcolor color;
    tstate state;
    int prog_id;
    tposition pos;
    int resting;
    int remaining_rest;
    bool food;
    bool dead;
    tdirection direction;
public:
    Bug();
    Bug(tcolor i_color,int i_progid,int i_resting);
    void start_resting();
    bool rested();
    int get_progid();
    tcolor get_color();
    tstate get_state();
    void set_state(tstate new_state);
    tdirection get_direction();
    void set_direction(tdirection new_direction);
    tposition get_position();
    void set_position(tposition new_position);
    bool get_food();
    void set_food(bool new_food);
    bool is_dead();
    void kill();
};

#endif /* BUG_H */
