#include <stdio.h>

int main() {
    int matriz[3][2];

    printf("Ingrese los elementos de la matriz 3x2:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Elemento [%d][%d\]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz almacenada:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
