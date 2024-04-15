int sensor;
const int powerpin = 8;
const int delayTime = 1000;
unsigned long previousMillis = 0;
#define wetSoil 370  // Define max value we consider soil 'wet'
#define drySoil 600  // Define min value we consider soil 'dry'

// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(powerpin, OUTPUT);
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= delay) {
    previousMillis = currentMillis;
    digitalWrite(powerpin, HIGH);
    delay(10);
    sensor = analogRead(A0);
    // digitalWrite(powerpin, LOW);
    Serial.println(sensor);
    if (sensor < wetSoil) {
      digitalWrite(9, LOW);
      // ie prea ud
    } else if (sensor < drySoil) {
      digitalWrite(9, LOW);
      // e ok
    } else {
      digitalWrite(9, HIGH);
      // nu ie destul de ud
    }
  } else {
    digitalWrite(powerpin, LOW);
  }
}
