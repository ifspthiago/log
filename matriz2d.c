#include <stdio.h>

int main() {
    int B[3][3];
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Insira os valores [%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    printf("Valores:\n");
    for (int i = 0; i <= 2; i++) {
        for (int j = 0; j <= 2; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    return 0;
}
