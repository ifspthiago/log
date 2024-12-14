#include <stdio.h>

int main() {
    int A[10], B[10][3];

    printf("Digite os valores para A:\n");
    for (int i = 0; i < 10; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < 10; i++) {
        int fact = 1;
        int n = A[i];
        for (int j = 1; n > 1; n--) {
            fact *= n;
        }

        B[i][0] = A[i] + 5;
        B[i][1] = fact;
        B[i][2] = A[i] * A[i];
    }

    printf("Matriz B:\n");
    for (int i = 0; i < 10; i++) {
        printf("[%d] [%d] [%d]\n", B[i][0], B[i][1], B[i][2]);
    }

    return 0;
}