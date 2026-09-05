# Control PID para seguimiento de línea

Una vez calculada la posición de la línea se define el error respecto del centro.

```text
error = posicion - centro
```

El término de control puede calcularse como:

```text
correccion = Kp·error + Ki·integral + Kd·derivada
```

Con:

```text
integral += error
derivada = error - errorAnterior
errorAnterior = error
```

Las velocidades de los motores se corrigen de forma diferencial:

```text
motorIzquierdo = velocidadBase + correccion
motorDerecho   = velocidadBase - correccion
```

Luego ambas salidas deben limitarse al rango PWM permitido por la plataforma.

## Ajuste recomendado
1. Comenzar con `Ki = 0` y `Kd = 0`.
2. Aumentar `Kp` hasta que el robot siga la línea, aunque oscile.
3. Aumentar `Kd` para reducir la oscilación y anticipar cambios rápidos.
4. Incorporar `Ki` solo si existe un error persistente que no desaparece con P+D.

Los parámetros dependen de velocidad, masa del carro, separación entre ruedas, altura de sensores y superficie de la pista, por lo que deben calibrarse experimentalmente.
