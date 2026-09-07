#include <stdio.h>

int main() {
    int vector[5];
    int i, suma = 0;
    float promedio;

    
    printf("Ingrese 5 numeros:\n");
    for (i = 0; i < 5; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vector[i]);
    }

    
    for (i = 0; i < 5; i++) {
        suma += vector[i];
    }
    promedio = (float)suma / 5;

    
    printf("\nSuma total: %d\n", suma);
    printf("Promedio: %.2f\n", promedio);

    return 0;
}
