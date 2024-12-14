#include <stdio.h>

int main()
{
    int A[8], B[8];
    
    for (int i = 0; i < 8; i++) {
        printf("Insira o valor [%d]: ", i);
        scanf("%d", &A[i]);
    }
        
    for (int j = 0; j < 8; j++) {
        B[j] = A[j]*A[j];
        printf(" %d;", B[j]);
    }

    return 0;
}