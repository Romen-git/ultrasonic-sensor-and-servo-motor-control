#include <Ultrasonic.h>
Ultrasonic u = Ultrasonic(3,4);
#include <Servo.h>
Servo s = Servo();
void setup() {
  // put your setup code here, to run once:
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  analogWrite(10,255);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  analogWrite(5,255);
  Serial.begin(9600);
  s.attach(2);
}

void loop()  {
  int x =Serial.read();
  if(x=='1'){
    s.write(90);
    delay(500);
    int d = u.read();
    if(d>10){
      digitalWrite(12,HIGH);
      digitalWrite(11,LOW);
      digitalWrite(7,HIGH);
      digitalWrite(6,LOW);
      delay(300);
      digitalWrite(12,LOW);
      digitalWrite(11,LOW);
      digitalWrite(7,LOW);
      digitalWrite(6,LOW);
      }
    }
   if(x=='2'){
    s.write(90);
    delay(500);
    digitalWrite(12,LOW);
    digitalWrite(11,HIGH);
    digitalWrite(7,LOW);
    digitalWrite(6,HIGH);
    }
    if(x=='0'){
    s.write(90);
    delay(500);
    digitalWrite(12,LOW);
    digitalWrite(11,LOW);
    digitalWrite(7,LOW);
    digitalWrite(6,LOW);
    }
    if(x=='3'){
    s.write(45);
    delay(500);
    int d = u.read();
    if(d>10){
    digitalWrite(12,HIGH);
    digitalWrite(11,LOW);
    digitalWrite(7,LOW);
    digitalWrite(6,LOW);
    delay(300);
    digitalWrite(12,LOW);
    digitalWrite(11,LOW);
    digitalWrite(7,LOW);
    digitalWrite(6,LOW);
    }
    }
    if(x=='4'){
    s.write(135);
    delay(500);
    int d = u.read();
    if(d>10){
    digitalWrite(12,LOW);
    digitalWrite(11,LOW);
    digitalWrite(7,HIGH);
    digitalWrite(6,LOW);
    delay(300);
    digitalWrite(12,LOW);
    digitalWrite(11,LOW);
    digitalWrite(7,LOW);
    digitalWrite(6,LOW);
    }
    }
}
  
  
