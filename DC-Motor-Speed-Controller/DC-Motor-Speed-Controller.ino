// DC Motor Speed Controller

const int SPin = 9; //pin 1 PWM
const int input1 = 8; //pin 2 Direction input 1
const int input2 = 7; //pin 3 Direction input 2
const int potentPin = A0; //Potentiometer's middle pin

void setup() {

pinMode(SPin, OUTPUT);
pinMode(input1, OUTPUT);
pinMode(input2, OUTPUT);
// set motor pins to output

Serial.begin(9600);

digitalWrite(input1, HIGH);
digitalWrite(input2, LOW);
// Set motor direction
}

void loop() {

int potentValue = analogRead(potentPin);
// Read potentiometer (0 to 1023)

int motorSpeed = map(potentValue, 0, 1023, 0, 255);

analogWrite(SPin, motorSpeed);

Serial.print("Potentiometer: ");
Serial.print(potentValue);
Serial.print(" | Motor PWM: ");
Serial.println(motorSpeed);
// Debugging

delay(50);
}