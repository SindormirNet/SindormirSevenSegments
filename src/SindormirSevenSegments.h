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
        void attach(uint8_t _sA, uint8_t _sB, uint8_t _sC, uint8_t _sD, uint8_t _sE, uint8_t _sF, uint8_t _sG, uint8_t _sDP);
        void attach(uint8_t _sA, uint8_t _sDP);
        void commonType(char t);
        void lampTest(void);
        void clear(void);
        void setDot(void);
        void clearDot(void);
    void print(char n);
    private:
        uint8_t _segs[8];

        uint8_t _sA;
        uint8_t _sB;
        uint8_t _sC;
        uint8_t _sD;
        uint8_t _sE;
        uint8_t _sF;
        uint8_t _sG;
        uint8_t _sDP;

	boolean _sT;
};

#endif
