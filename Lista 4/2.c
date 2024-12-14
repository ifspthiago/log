#include <stdio.h>

int main() {
    int A[6], B[6];
    
    for (int i = 0; i < 6; i++) {
        printf("Insira o valor [%d]: ", i);
        scanf("%d", &A[i]);
    }
        
    for (int j = 0; j < 6; j++) {
        int resultado = 1;
        for (int n = A[j]; n > 0; n--) {
            resultado *= n;
        }
        B[j] = resultado;
        printf("Fatorial de %d é %d;\n", A[j], B[j]);
    }

    return 0;
}