#include <stdio.h>

int main() {
    int vector[5];
    int i;

    
    printf("Ingrese 5 numeros:\n");
    for (i = 0; i < 5; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vector[i]);
    }

    
    printf("\nDatos del vector:\n");
    for (i = 0; i < 5; i++) {
        printf("vector[%d] = %d\n", i, vector[i]);
    }

    return 0;
}
