char command;

// Motor Driver Pins
#define ENA 3   // Left motor speed
#define ENB 9   // Right motor speed
#define IN1 4   // Right motor input 1
#define IN2 5   // Right motor input 2
#define IN3 6   // Left motor input 1
#define IN4 7   // Left motor input 2


#define SPEED 200     // Motor speed

void setup() {
  Serial.begin(9600);

  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);


  analogWrite(ENA, SPEED);
  analogWrite(ENB, SPEED);

  stopMotors();
  
}

void loop() {
  if (Serial.available()) {
    command = Serial.read();
    Serial.println(command);

    switch (command) {
      case 'F': forward(); break;
      case 'B': backward(); break;
      case 'L': turnLeft(); break;
      case 'R': turnRight(); break;
      case 'G': forwardLeft(); break;
      case 'I': forwardRight(); break;
      case 'H': backLeft(); break;
      case 'J': backRight(); break;

      case 'S': stopMotors(); break;
      default:  stopMotors(); break;
    }
  }
}

// Movement Functions
void forward() {
  digitalWrite(IN1, HIGH); digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH); digitalWrite(IN4, LOW);
}

void backward() {
  digitalWrite(IN1, LOW); digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW); digitalWrite(IN4, HIGH);
}

void turnLeft() {
  digitalWrite(IN1, HIGH); digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);  digitalWrite(IN4, HIGH);
}

void turnRight() {
  digitalWrite(IN1, LOW);  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH); digitalWrite(IN4, LOW);
}

void forwardLeft() {
  digitalWrite(IN1, HIGH); digitalWrite(IN2, LOW);  // Right motor
  digitalWrite(IN3, LOW);  digitalWrite(IN4, LOW);  // Left motor slow/stop
}

void forwardRight() {
  digitalWrite(IN1, LOW);  digitalWrite(IN2, LOW);  // Right motor slow/stop
  digitalWrite(IN3, HIGH); digitalWrite(IN4, LOW);  // Left motor
}

void backLeft() {
  digitalWrite(IN1, LOW);  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);  digitalWrite(IN4, LOW);
}

void backRight() {
  digitalWrite(IN1, LOW);  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);  digitalWrite(IN4, HIGH);
}

void stopMotors() {
  digitalWrite(IN1, LOW); digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW); digitalWrite(IN4, LOW);
}
