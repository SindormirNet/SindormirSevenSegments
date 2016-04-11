/*
SindormirSevenSegments.h - Library for using Seven Segments Display
Created by Jorge Gomez @ Sindormir.net
Released under the terms of the GPL v3 License
*/

#ifndef SindormirSevenSegments_h
#define SindormirSevenSegments_h

#define Sindormir7segs SindormirSevenSegments
#define A 'a'
#define ANODO 'a'
#define ANODE 'a'
#define C 'k'
#define K 'k'
#define CATODO 'k'
#define CATHODE 'k'

#include "Arduino.h"

class SindormirSevenSegments {
    public:
        SindormirSevenSegments(void);
        void attach(byte _sA, byte _sB, byte _sC, byte _sD, byte _sE, byte _sF, byte _sG, byte _sDP);
        void attach(byte _sA, byte _sDP);
        void commonType(char t);
        void lampTest(void);
        void clear(void);
        void setDot(void);
        void clearDot(void);
    void print(char n);
    private:
        byte _segs[8];

        byte _sA;
        byte _sB;
        byte _sC;
        byte _sD;
        byte _sE;
        byte _sF;
        byte _sG;
        byte _sDP;

	boolean _sT;
};

#endif
