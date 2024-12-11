const int sensorH1= 9;
const int ledPin =2;
int buzzer =A1;
 



void setup() {
 pinMode (sensorH1, INPUT_PULLUP);
 pinMode (ledPin, OUTPUT);
 pinMode (buzzer, OUTPUT);
 
 }

void loop() {
  int estadoP1 = digitalRead(sensorH1);
  
  if(estadoP1 == LOW ){
    digitalWrite(ledPin, HIGH);
    
  }
  else {
    digitalWrite(ledPin,LOW);
  }

}
