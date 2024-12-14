#include <stdio.h>

int main()
{
    int A[10], B[10];
    
    for (int i = 0; i < 10; i++) {
        printf("Insira o valor [%d]: ", i);
        scanf("%d", &A[i]);
    }
        
    for (int j = 0; j < 10; j++) {
        B[j] = A[9 - j];
        printf(" %d;", B[j]);
    }

    return 0;
}