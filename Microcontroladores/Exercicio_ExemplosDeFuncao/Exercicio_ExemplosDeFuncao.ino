/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 3;
int duracao[]={200, 300, 500};

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);     
}

// the loop routine runs over and over again forever:
void loop() {
  int i;
  for (i=0; i<2;i++)
  {
  moorse(duracao[i]);
}
}
//subprograma
void moorse (int tempo){
 digitalWrite(led,HIGH);
 delay(tempo);
 digitalWrite(led, LOW);
 delay(tempo);
}
