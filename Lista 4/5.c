#include <stdio.h>

int main() {
    int A[20], B[30], C[50];
    int k;
    
    for (int i = 0; i < 20; i++) {
        printf("Insira o valor para A[%d]: ", i);
        scanf("%d", &A[i]);
    }

     for (int j = 0; j < 30; j++) {
        printf("Insira o valor para B[%d]: ", j);
        scanf("%d", &B[j]);
    }
        
    for (int k = 0; k < 20; k++) {
        C[k] = A[k];      
    }

    for (int m = 0; m < 30; m++) {
        C[k] = B[m]; 
        k++;     
    }

    for (int l = 0; l < 50; l++){
        printf(" %d;", C[l]);
    }

    return 0;
}