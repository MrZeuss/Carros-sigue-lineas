// ESP32-DO con driver de motores integrado
// Configuración de pines trabajada para el carro sigue líneas/laberinto.

const int M1_A = 2;
const int M1_B = 4;
const int M2_A = 13;
const int M2_B = 27;

void configurarMotores() {
  pinMode(M1_A, OUTPUT);
  pinMode(M1_B, OUTPUT);
  pinMode(M2_A, OUTPUT);
  pinMode(M2_B, OUTPUT);
}

void motor1(int velocidad) {
  velocidad = constrain(velocidad, -255, 255);
  if (velocidad > 0) {
    analogWrite(M1_A, velocidad);
    analogWrite(M1_B, 0);
  } else if (velocidad < 0) {
    analogWrite(M1_A, 0);
    analogWrite(M1_B, -velocidad);
  } else {
    analogWrite(M1_A, 0);
    analogWrite(M1_B, 0);
  }
}

void motor2(int velocidad) {
  velocidad = constrain(velocidad, -255, 255);
  if (velocidad > 0) {
    analogWrite(M2_A, velocidad);
    analogWrite(M2_B, 0);
  } else if (velocidad < 0) {
    analogWrite(M2_A, 0);
    analogWrite(M2_B, -velocidad);
  } else {
    analogWrite(M2_A, 0);
    analogWrite(M2_B, 0);
  }
}

void detener() {
  motor1(0);
  motor2(0);
}

void setup() {
  configurarMotores();
  detener();
  delay(1000);
}

void loop() {
  motor1(170);
  motor2(170);
  delay(2000);

  detener();
  delay(700);

  motor1(-160);
  motor2(160);
  delay(700);

  detener();
  delay(700);

  motor1(160);
  motor2(-160);
  delay(700);

  detener();
  delay(2000);
}
