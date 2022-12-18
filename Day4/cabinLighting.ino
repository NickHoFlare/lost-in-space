int led1 = 8;
int led2 = 9;
int led3 = 10;
// The order of the mapping of switch to pin has been swapped, 
// as the orientation/order of switches on the DIP switch is the opposite to what is on the arduino
int switch1 = 2;
int switch2 = 3;
int switch3 = 4;

void setup() {
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
    pinMode(led3, OUTPUT);
    pinMode(switch1, INPUT);
    pinMode(switch2, INPUT);
    pinMode(switch3, INPUT);
}

void loop() {
    configureSwitch(led1, switch1);
    configureSwitch(led2, switch2);
    configureSwitch(led3, switch3);
}

void configureSwitch(int led, int switchNum) {
  if (digitalRead(switchNum) == HIGH) {
      digitalWrite(led, HIGH);
  } else {
      digitalWrite(led, LOW);
  }
}
