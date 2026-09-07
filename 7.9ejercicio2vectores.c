#include <stdio.h>

int main() {
    int vector[5];
    int i, suma = 0;
    float promedio;

    // Cargar datos en el vector
    printf("Ingrese 5 numeros:\n");
    for (i = 0; i < 5; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vector[i]);
    }

    // Sumar los elementos del vector
    for (i = 0; i < 5; i++) {
        suma += vector[i];
    }

    // Calcular promedio
    promedio = (float)suma / 5;

    // Mostrar resultados
    printf("\nSuma total: %d\n", suma);
    printf("Promedio: %.2f\n", promedio);

    return 0;
}
