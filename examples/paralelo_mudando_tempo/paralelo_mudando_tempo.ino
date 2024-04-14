#include <paralelo.h>
// Dois leds que irão piscar em tempos diferentes
#define LED1 8
#define LED2 9
Paralelo tempo1 = Paralelo(5000);
Paralelo tempo2 = Paralelo(200);

void setup() {
   pinMode(LED1,OUTPUT);
   pinMode(LED2,OUTPUT);
}
long tempo = 500;
int contador = 0;
void loop() {
   if(tempo1.monitor()){
        digitalWrite(LED1,!digitalRead(LED1));
        contador = (contador % 10) + 1;
		tempo1.setTempo(tempo*contador);
   }
   if(tempo2.monitor()){
        digitalWrite(LED2,!digitalRead(LED2));
   }
   
}
