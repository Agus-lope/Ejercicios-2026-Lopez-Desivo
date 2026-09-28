#include <stdio.h>

int main() {
    int matriz[4][3][2];

    printf("Ingrese los elementos de la matriz 4x3x2:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 2; k++) {
            printf("Elemento [%d][%d\][%d\]: ", i, j, k);
            scanf("%d", &matriz[i][j][k]);
            }
        }
    }
    

    printf("\nMatriz almacenada:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
             for (int k = 0; k < 2; k++) {
            printf("%d\t", matriz[i][j][k]);
             }
        }
        printf("\n");
    }

    return 0;
}
