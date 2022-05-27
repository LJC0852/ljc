#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos1 = 75;    // variable to store the servo position
int pos2 = 45;
void setup() {
  myservo.attach(9);// attaches the servo on pin 9 to the servo object
  myservo.attach(10);
  Serial.begin(9600);
}

void loop() {
  for(pos1 =75;pos1 < 145;pos1 += 1){
    if(pos1>=90&&pos1<=145){
      for(pos2=45;pos2<100;pos2+=1){
        myservo.attach(10);
        myservo.write(pos2);
        Serial.print(pos2);
        Serial.print("\n");   
    }
  }
  else{
      for(pos2=100;pos2>=45;pos2-=1){
        myservo.attach(10);
        myservo.write(pos2);
        Serial.print(pos2);
        Serial.print("\n");
      }
  }
    myservo.attach(9);
    myservo.write(pos1);
    Serial.print(pos1);
    Serial.print("\n");
    delay(100);
  }
  for(pos1 = 145;pos1 >= 75;pos1 -= 1){
    myservo.attach(9);
    myservo.write(pos1);
    Serial.print(pos1);
    Serial.print("\n");
    delay(100);
  }
}
