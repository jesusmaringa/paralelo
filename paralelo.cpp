#include "Arduino.h"
#include "paralelo.h"

Paralelo::Paralelo(long _tempo){
  tempo = _tempo;
}
bool Paralelo::monitor(){
   if(millis() - tempo_anterior >= tempo){
       tempo_anterior = millis();
	   return true;
   }
   return false;
}
void Paralelo::setTempo(long _tempo){
   tempo = _tempo;
}
long Paralelo::getTempo(){
   return tempo;
}
