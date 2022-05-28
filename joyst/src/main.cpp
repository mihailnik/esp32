#include <Arduino.h>
#include <Joystik.h>
#include <Keypad.h>

joystik joy = joystik(A7, 2, A6, 2, A5, 100);

void joy_print(unsigned long period){
 
  static unsigned long joy_print_millis;
  if ( (millis() - joy_print_millis) > period) {
    joy_print_millis = millis();
    Serial.print("X axis: ");
    Serial.print(joy.X_axis);
    Serial.print(", Y axis: ");
    Serial.println(joy.Y_axis);

    // Serial.print(", X/Y mid: ");
    // Serial.print(joy.mid_X);
    // Serial.print(" / ");
    // Serial.println(joy.mid_Y);
  }
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(57600);
  joy.init();

  
}

void loop() {
  // put your main code here, to run repeatedly:
  joy.tick();
  joy_print(1000);
}