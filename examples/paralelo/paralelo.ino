#include <paralelo.h>
#define LED1 8
#define LED2 9
Paralelo tempo1 = Paralelo(1000);
Paralelo tempo2 = Paralelo(500);

void setup() {
   pinMode(LED1,OUTPUT);
   pinMode(LED2,OUTPUT);
}

void loop() {
   if(tempo1.monitor()){
        digitalWrite(LED1,!digitalRead(LED1));
   }
   if(tempo2.monitor()){
        digitalWrite(LED2,!digitalRead(LED2));
   }
}
