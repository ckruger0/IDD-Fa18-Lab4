#include <Servo.h>

Servo myservo;  // create servo object to control a servo

int light_sensorPin = 5;
int val;    // variable to read the value from the analog pin
int light_reading =0;

void setup() {
  Serial.begin(9600);
  pinMode( light_sensorPin, INPUT );
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  val = analogRead(light_sensorPin);           
  val = map(val, 0, 150, 50, 165);    
  myservo.write(val);          
  delay(15);                     
}

