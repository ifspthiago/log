#include <stdio.h>

int main() {
    int A[5], B[5], C[5];
    
    for (int i = 0; i < 5; i++) {
        printf("Insira o valor para A[%d]: ", i);
        scanf("%d", &A[i]);
    }

     for (int j = 0; j < 5; j++) {
        printf("Insira o valor para B[%d]: ", j);
        scanf("%d", &B[j]);
    }
        
    for (int k = 0; k < 5; k++) {
        C[k] = A[k]-B[k];
        printf(" %d;", C[k]);
    }

    return 0;
}