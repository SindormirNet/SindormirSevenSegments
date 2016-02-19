/*
SindormirSevenSegments.h - Library for using Seven Segments Display
Created by Jorge Gomez @ Sindormir.net 2016
Released under the terms of the GPL v3 License
*/

#include "Arduino.h"
#include "SindormirSevenSegments.h"

SindormirSevenSegments::SindormirSevenSegments(byte _sA, byte _sB, byte _sC, byte _sD, byte _sE, byte _sF, byte _sG, byte _sDP){
    byte *ptr=&_sA;

    //Create array for segments and inilialize outputs (All HIGH)
    for (byte i=0; i<8; i++){
        _segs[i] = *ptr++;
        pinMode(_segs[i], OUTPUT);
        digitalWrite(_segs[i], HIGH);
    }
}

void SindormirSevenSegments::print(byte num){
    //                      A, B, C, D, E, F, G, DP
    byte symbols[16][8]= {  1, 1, 1, 1, 1, 1, 0, 0, //0
                            0, 1, 1, 0, 0, 0, 0, 0, //1
                            1, 1, 0, 1, 1, 0, 1, 0, //2
                            1, 1, 0, 1, 1, 0, 1, 0, //3
                            1, 1, 0, 1, 1, 0, 1, 0, //4
                            1, 1, 0, 1, 1, 0, 1, 0, //5
                            1, 1, 0, 1, 1, 0, 1, 0, //6
                            1, 1, 0, 1, 1, 0, 1, 0, //7
                            1, 1, 0, 1, 1, 0, 1, 0, //8
                            1, 1, 0, 1, 1, 0, 1, 0, //9
                            1, 1, 0, 1, 1, 0, 1, 0, //A
                            1, 1, 0, 1, 1, 0, 1, 0, //B
                            1, 1, 0, 1, 1, 0, 1, 0, //C
                            1, 1, 0, 1, 1, 0, 1, 0, //D
                            1, 1, 0, 1, 1, 0, 1, 0, //E
                            1, 1, 0, 1, 1, 0, 1, 0  //F
    };

    for (byte i=0; i<8; i++){
        digitalWrite(_segs[i], symbols[num][i]);
    }
}
