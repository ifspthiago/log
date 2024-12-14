#include <stdio.h>

int main()
{
    int A[5], B[5];
    
    for (int i = 0; i < 5; i++) {
        printf("Insira o valor [%d]: ", i);
        scanf("%d", &A[i]);
    }
        
    for (int j = 0; j < 5; j++) {
        B[j] = A[j] * 3;
        printf(" %d;", B[j]);
    }

    return 0;
}