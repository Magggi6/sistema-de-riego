#include <Servo.h>
Servo motor;
void setup() { 
 pinMode(4,OUTPUT); 
 pinMode(5,OUTPUT);
motor.attach(3);
}
void loop() {  
motor.write(random(160));
delay(277);
digitalWrite(4,HIGH);
delay(277);
digitalWrite(4,LOW);
digitalWrite(5,HIGH);
delay(277);
digitalWrite(5,LOW);
delay(277);

}
