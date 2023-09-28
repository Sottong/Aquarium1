#include <Arduino.h>
#include <Servo.h>

Servo servo;

String inString = "";

void setup(){
  Serial.begin(9600);
  servo.attach(12);
  Serial.print("mmmmm: ");
}

void loop(){
  Serial.print("mmmmm: ");
  while(Serial.available() > 0){
    int inChar = Serial.read();
    if(isDigit(inChar)){
      inString += (char)inChar;
    }
  

    if(inChar == '\n'){
      Serial.print("Value: ");
      Serial.println(inString.toInt());

      int value = inString.toInt();

      
      servo.write(value);

      inString = "";
    }
  }
}