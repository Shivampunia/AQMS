// Motor Pins
#define IN1 14
#define IN2 27
#define IN3 26
#define IN4 25
#define ENA 33
#define ENB 32

// Ultrasonic Sensor
#define TRIG 5
#define ECHO 18

// PIR Sensor
#define PIR 4

void setup() {
  // Motor pins
  pinMode(IN1, OUTPUT); pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT); pinMode(IN4, OUTPUT);
  pinMode(ENA, OUTPUT); pinMode(ENB, OUTPUT);
  
  // Sensor pins
  pinMode(TRIG, OUTPUT); pinMode(ECHO, INPUT);
  pinMode(PIR, INPUT);

  Serial.begin(115200);
}

long readUltrasonicDistance() {
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);
  
  long duration = pulseIn(ECHO, HIGH);
  long distance = duration * 0.034 / 2;
  return distance;
}

void moveForward() {
  digitalWrite(IN1, HIGH); digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH); digitalWrite(IN4, LOW);
  analogWrite(ENA, 200); analogWrite(ENB, 200);
}

void stopCar() {
  digitalWrite(IN1, LOW); digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW); digitalWrite(IN4, LOW);
}

void moveBackward() {
  digitalWrite(IN1, LOW); digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW); digitalWrite(IN4, HIGH);
  analogWrite(ENA, 200); analogWrite(ENB, 200);
}

void turnLeft() {
  digitalWrite(IN1, LOW); digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH); digitalWrite(IN4, LOW);
  analogWrite(ENA, 150); analogWrite(ENB, 150);
}

void loop() {
  long distance = readUltrasonicDistance();
  bool motionDetected = digitalRead(PIR);

  Serial.print("Distance: "); Serial.print(distance); Serial.println(" cm");
  Serial.print("PIR: "); Serial.println(motionDetected);

  if (motionDetected) {
    stopCar();
    delay(2000); // Stop for 2 seconds if motion detected
  }
  else if (distance < 20) {
    stopCar();
    delay(500);
    moveBackward();
    delay(800);
    turnLeft();
    delay(600);
    stopCar();
  }
  else {
    moveForward();
  }

  delay(100);
}
