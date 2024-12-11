int activador = A5;
int verde = 8;
int amarillo =9;
int rojo =10;

void setup() {
  // put your setup code here, to run once:
  pinMode(verde, OUTPUT);
  pinMode(rojo, OUTPUT);
  pinMode(amarillo, OUTPUT);
  pinMode(activador, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorValue = analogRead(activador);

  Serial.println(sensorValue);
  delay(500);

  if(sensorValue > 400 && sensorValue < 550){
    digitalWrite(verde, HIGH);
    delay(1000);
    digitalWrite(verde, LOW);
  }

  if(sensorValue > 551 && sensorValue < 650 ){
    digitalWrite(amarillo, HIGH);
    delay(1000);
    digitalWrite(amarillo, LOW);
  }

  if(sensorValue > 651 && sensorValue < 700){
    digitalWrite(rojo, HIGH);
    delay(1000);
    digitalWrite(rojo, LOW);
  }

  else{
    digitalWrite(rojo, LOW);
    digitalWrite(amarillo, LOW);
    digitalWrite(verde, LOW);
  }
  

}
