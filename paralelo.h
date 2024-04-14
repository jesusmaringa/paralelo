#ifndef Paralelo_h
#define Paralelo_h

#include "Arduino.h"

class Paralelo{
  private:
    long tempo = 0;
    unsigned long tempo_anterior = 0;
  public:
    Paralelo(long _tempo);
    bool monitor();
	void setTempo(long _tempo);
	long getTempo();
};
#endif