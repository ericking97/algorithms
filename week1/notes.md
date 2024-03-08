# Recursión

Un algoritmo para resolver la instancia de un problema es un algoritmo que primero resuelve instancias más sencillas del mismo problema y luego usa esos resultados para resolver la instancia original

Ej

```cpp
int sum(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return sum(a + 1, b - 1);
    }
}
```

Problema:

> Dados 2 enteros no negativos a, b. Calcular a^b

Dividir en problema en problemas más pequeños

2^5 = 2^4 * 2
2^4 = 2^3 * 2
2^3 = 2^2 * 2
2^2 = 2^1 * 2
2^1 = 2^0 * 2

De forma más óptima
2^6 = 2^3 * 2^3
2^3 = 2^1 * 2^1 * 2
2^1 = 2^0 * 2^0 * 2
2^1 = 2^0
