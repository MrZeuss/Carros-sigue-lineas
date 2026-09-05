# ESP32-DO

Plataforma avanzada con driver de motores integrado en la placa ESP32-DO.

## Motores
- Motor 1: GPIO2 / GPIO4.
- Motor 2: GPIO13 / GPIO27.

## Sensores previstos
- Barra de 5 sensores TCRT5000 para seguimiento de línea.
- Tres sensores VL53L0X para detección frontal y lateral de paredes/obstáculos.

## Estrategia de navegación trabajada
Ante un obstáculo frontal, el robot puede ejecutar una maniobra de desvío: giro a la izquierda ~90°, avance, giro a la derecha ~90°, avance y giro a la derecha ~70° hasta recuperar la línea. Estos valores se documentan como punto de partida y requieren ajuste mecánico.

## Evolución prevista
1. Prueba de motores.
2. Lectura de 5 sensores.
3. Calibración.
4. Cálculo de posición.
5. PID.
6. Sensores ToF.
7. Navegación de laberinto.
