#include <AFMotor.h>

// Motor izquierdo conectado al canal M1 del shield.
AF_DCMotor motorIzquierdo(1);

// Motor derecho conectado al canal M2 del shield.
AF_DCMotor motorDerecho(2);

void detenerMotores() {
  motorIzquierdo.run(RELEASE);
  motorDerecho.run(RELEASE);
}

void avanzar(uint8_t velocidad) {
  motorIzquierdo.setSpeed(velocidad);
  motorDerecho.setSpeed(velocidad);
  motorIzquierdo.run(FORWARD);
  motorDerecho.run(FORWARD);
}

void retroceder(uint8_t velocidad) {
  motorIzquierdo.setSpeed(velocidad);
  motorDerecho.setSpeed(velocidad);
  motorIzquierdo.run(BACKWARD);
  motorDerecho.run(BACKWARD);
}

void girarIzquierda(uint8_t velocidad) {
  motorIzquierdo.setSpeed(velocidad);
  motorDerecho.setSpeed(velocidad);
  motorIzquierdo.run(BACKWARD);
  motorDerecho.run(FORWARD);
}

void girarDerecha(uint8_t velocidad) {
  motorIzquierdo.setSpeed(velocidad);
  motorDerecho.setSpeed(velocidad);
  motorIzquierdo.run(FORWARD);
  motorDerecho.run(BACKWARD);
}

void setup() {
  // La velocidad se expresa entre 0 y 255.
  detenerMotores();
  delay(1000);
}

void loop() {
  avanzar(180);
  delay(2000);

  detenerMotores();
  delay(700);

  retroceder(180);
  delay(1500);

  detenerMotores();
  delay(700);

  girarIzquierda(170);
  delay(700);

  detenerMotores();
  delay(700);

  girarDerecha(170);
  delay(700);

  detenerMotores();
  delay(2000);
}
