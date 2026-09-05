# Carros sigue líneas

Colección de plataformas de robots seguidores de línea desarrolladas con Arduino y ESP32. El repositorio permite comparar distintas generaciones de hardware, sensores, drivers de motores y algoritmos de control.

## Plataformas

| Plataforma | Controlador | Driver | Sensores | Objetivo |
|---|---|---|---|---|
| Arduino + AFMotor | Arduino Uno/Nano | Motor Shield AFMotor | Digitales/analógicos | Plataforma inicial |
| Arduino + puente H | Arduino Nano/Uno | Puente H externo | Analógicos | Control directo de motores |
| ESP32 + puente H | ESP32 | Puente H externo | Analógicos / I2C | Control avanzado |
| ESP32-DO | ESP32-DO | Driver integrado | 5 TCRT5000 + ToF | Sigue líneas, obstáculos y laberintos |

## Organización

- `docs/`: teoría, calibración, PID y navegación.
- `hardware/`: conexiones de cada plataforma.
- `code/`: programas Arduino/ESP32 organizados progresivamente.
- `sensors/`: documentación de sensores de línea y distancia.
- `algorithms/`: algoritmos reutilizables.
- `bom/`: listas de componentes.
- `images/`: diagramas y fotografías.

## Desarrollo progresivo

La idea es conservar programas independientes para prueba de motores, lectura y calibración de sensores, cálculo de posición, control proporcional, PID, detección de intersecciones, obstáculos y navegación de laberintos.

## Proyecto relacionado

La barra analógica I2C de 8 canales dispone de su propio repositorio: `MrZeuss/barra-linea-i2c`.
