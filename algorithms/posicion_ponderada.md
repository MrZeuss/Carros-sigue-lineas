# Posición ponderada de la línea

Para sensores analógicos conviene evitar convertir inmediatamente cada lectura a 0/1. La posición puede estimarse mediante un promedio ponderado:

```text
P = Σ(Li · pi) / Σ(Li)
```

Donde:
- `Li` es la intensidad normalizada del sensor `i` (por ejemplo 0–1000).
- `pi` es la posición física asignada al sensor.

Para cinco sensores puede usarse:

```text
p = {0, 1000, 2000, 3000, 4000}
```

El centro queda en 2000 y el error para el controlador es:

```text
error = posicion - 2000
```

## Normalización

Cada sensor debe calibrarse individualmente registrando mínimo y máximo sobre pista clara y línea oscura. Luego se normaliza a un intervalo común (0–1000). Esto compensa diferencias de sensibilidad entre sensores.

## Línea perdida

Si `Σ(Li)` es muy pequeña, el robot no debe dividir por cero. Puede conservar el último error conocido y girar hacia el lado donde se perdió la línea hasta recuperarla.
