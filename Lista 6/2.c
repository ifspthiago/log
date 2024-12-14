#include <stdio.h>

int main() {
    int A[7], B[7], C[2][7];

    printf("Digite os valores para A:\n");
    for (int i = 0; i < 7; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    printf("Digite os valores para B:\n");
    for (int i = 0; i < 7; i++) {
        printf("B[%d]: ", i);
        scanf("%d", &B[i]);
    }

    for (int i = 0; i < 7; i++) {
        C[i][0] = A[i];
        C[i][1] = B[i];
    }

    printf("Matriz C:\n");
    for (int i = 0; i < 7; i++) {
        printf("[%d] [%d]\n", C[i][0], C[i][1]);
    }

    return 0;
}