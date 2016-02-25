/*
SindormirSevenSegments.h - Library for using Seven Segments Display
Created by Jorge Gomez @ Sindormir.net 2016
Released under the terms of the GPL v3 License
*/

#include "Arduino.h"
#include "SindormirSevenSegments.h"

SindormirSevenSegments::SindormirSevenSegments(byte _sA, byte _sB, byte _sC, byte _sD, byte _sE, byte _sF, byte _sG, byte _sDP){

    //Create array for segments and inizialize outputs (All HIGH)
    _segs[0] = _sA;
    _segs[1] = _sB;
    _segs[2] = _sC;
    _segs[3] = _sD;
    _segs[4] = _sE;
    _segs[5] = _sF;
    _segs[6] = _sG;
    _segs[7] = _sDP;

    for (byte i=0; i<8; i++){
        pinMode(_segs[i], OUTPUT);
        digitalWrite(_segs[i], HIGH);
    }
}

void SindormirSevenSegments::print(byte num){
    //                      A, B, C, D, E, F, G, DP
    byte symbols[16][8]= { {1, 1, 1, 1, 1, 1, 0, 0}, //0
                           {0, 1, 1, 0, 0, 0, 0, 0}, //1
                           {1, 1, 0, 1, 1, 0, 1, 0}, //2
                           {1, 1, 1, 1, 0, 0, 1, 0}, //3
                           {0, 1, 1, 0, 0, 1, 1, 0}, //4
                           {1, 0, 1, 1, 0, 1, 1, 0}, //5
                           {1, 0, 1, 1, 1, 1, 1, 0}, //6
                           {1, 1, 1, 0, 0, 0, 0, 0}, //7
                           {1, 1, 1, 1, 1, 1, 1, 0}, //8
                           {1, 1, 1, 0, 0, 1, 1, 0}, //9
                           {1, 1, 1, 0, 1, 1, 1, 0}, //A
                           {0, 0, 1, 1, 1, 1, 1, 0}, //b
                           {1, 0, 0, 1, 1, 1, 0, 0}, //C
                           {0, 1, 1, 1, 1, 0, 1, 0}, //d
                           {1, 0, 0, 1, 1, 1, 1, 0}, //E
                           {1, 0, 0, 0, 1, 1, 1, 0}  //F
    };

    if (num < 16) {
        for (byte i=0; i<8; i++) {
            digitalWrite(_segs[i], symbols[num][i]);
        }
    }
}

