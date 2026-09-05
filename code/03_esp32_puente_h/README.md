# ESP32 + puente H

Versión del carro basada en ESP32 y puente H externo.

## Configuración de motores utilizada

- Motor 1: GPIO2 y GPIO4.
- Motor 2: GPIO13 y GPIO27.

## Encoders considerados en el proyecto
Se trabajaron dos distribuciones posibles:
- Variante A: M1 GPIO16/GPIO25 y M2 GPIO17/GPIO26.
- Variante B: M1 GPIO18/GPIO19 y M2 GPIO5/GPIO23.

Los encoders se dejan documentados como opcionales porque la asignación definitiva depende de la placa y del resto de sensores instalados.
