/*
 * File:   Marker.cpp
 */

#include "Marker.h"

//purpose: encapsulating bit operations
//every cell in world has a marker

Marker::Marker(){
  bits = 0;
};

void Marker::set_marker(tmark mark, tcolor color){
    switch(color.color){
        case 0: //red
            bits |= (1UL << mark.mark); //first group of bits (6) will be used for red bugs
            break;
        case 1: //black
            bits |= (1UL << (mark.mark+6)); //the next (6) for black bugs
            break;
    }
};

void Marker::clear_marker(tmark mark, tcolor color){
    switch(color.color){
        case 0://red
            bits &= ~(1UL << mark.mark); //unsetting bitmask
            break;
        case 1://black
            bits &= ~(1UL << (mark.mark+6)); //unsetting bitmask
            break;
    }
};

//compare colors&markers
bool Marker::check_marker(tmark mark, tcolor color){
    int bit;
    switch(color.color){
        case 0://red
            bit = (bits >> mark.mark) & 1U;
            return(bit == 1);
        case 1://black
            bit = (bits >> (mark.mark+6)) & 1U;
            return (bit == 1);
    }
};

//check if any bit in the group of 6 bits is zero
bool Marker::check_other_marker(tcolor color){
    int bit;
    switch(color.color){
        case 0://red
            for(int i = 0; i < 6; i++){
                bit = (bits >> i) & 1U;
                if(bit == 1)
                  return true;
            }
            return false;
        case 1://black
            for(int i = 0; i < 6; i++){
                bit = (bits >> (i + 6)) & 1U;
                if(bit == 1)
                  return true;
            }
            return false;
    }
};
