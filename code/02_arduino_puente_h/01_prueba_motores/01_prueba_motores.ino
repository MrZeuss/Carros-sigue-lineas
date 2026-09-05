// Arduino Uno/Nano + puente H
// Configuración utilizada en uno de los carros de dos motores.

const int ENA = 3;  // PWM motor izquierdo
const int IN1 = 6;
const int IN2 = 7;
const int IN3 = 8;
const int IN4 = 9;
const int ENB = 5;  // PWM motor derecho

void configurarMotores() {
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(ENB, OUTPUT);
}

void motorIzquierdo(int velocidad) {
  velocidad = constrain(velocidad, -255, 255);
  if (velocidad > 0) {
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
  } else if (velocidad < 0) {
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
  } else {
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
  }
  analogWrite(ENA, abs(velocidad));
}

void motorDerecho(int velocidad) {
  velocidad = constrain(velocidad, -255, 255);
  if (velocidad > 0) {
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
  } else if (velocidad < 0) {
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
  } else {
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);
  }
  analogWrite(ENB, abs(velocidad));
}

void detener() {
  motorIzquierdo(0);
  motorDerecho(0);
}

void setup() {
  configurarMotores();
  detener();
  delay(1000);
}

void loop() {
  motorIzquierdo(180);
  motorDerecho(180);
  delay(2000);

  detener();
  delay(700);

  motorIzquierdo(-180);
  motorDerecho(-180);
  delay(1500);

  detener();
  delay(700);

  motorIzquierdo(-170);
  motorDerecho(170);
  delay(700);

  detener();
  delay(700);

  motorIzquierdo(170);
  motorDerecho(-170);
  delay(700);

  detener();
  delay(2000);
}
