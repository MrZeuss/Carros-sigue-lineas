# Código

El firmware se organizará por plataforma y por nivel de complejidad.

## Secuencia sugerida

1. Prueba de motores.
2. Lectura de sensores.
3. Calibración de sensores.
4. Cálculo de posición de línea.
5. Control proporcional.
6. Control PID.
7. Detección de intersecciones.
8. Detección de obstáculos.
9. Navegación de laberinto.

Las implementaciones de Arduino + AFMotor, Arduino + puente H, ESP32 + puente H y ESP32-DO se mantendrán separadas para facilitar pruebas y reutilización.
