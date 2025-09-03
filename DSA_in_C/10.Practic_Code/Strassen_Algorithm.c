#include <stdio.h>
#include <stdlib.h>

#define N 2  // Matrix size (must be power of 2)

void add(int a[N][N], int b[N][N], int result[N][N]) {
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            result[i][j] = a[i][j] + b[i][j];
}

void subtract(int a[N][N], int b[N][N], int result[N][N]) {
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            result[i][j] = a[i][j] - b[i][j];
}

void strassen(int A[N][N], int B[N][N], int C[N][N]) {
    if (N == 1) {
        C[0][0] = A[0][0] * B[0][0];
        return;
    }

    int a11 = A[0][0], a12 = A[0][1], a21 = A[1][0], a22 = A[1][1];
    int b11 = B[0][0], b12 = B[0][1], b21 = B[1][0], b22 = B[1][1];

    int M1 = (a11 + a22) * (b11 + b22);
    int M2 = (a21 + a22) * b11;
    int M3 = a11 * (b12 - b22);
    int M4 = a22 * (b21 - b11);
    int M5 = (a11 + a12) * b22;
    int M6 = (a21 - a11) * (b11 + b12);
    int M7 = (a12 - a22) * (b21 + b22);

    C[0][0] = M1 + M4 - M5 + M7;
    C[0][1] = M3 + M5;
    C[1][0] = M2 + M4;
    C[1][1] = M1 - M2 + M3 + M6;
}

int main() {
    int A[N][N], B[N][N], C[N][N];

    printf("Enter elements of Matrix A (%dx%d):\n", N, N);
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            scanf("%d", &A[i][j]);

    printf("Enter elements of Matrix B (%dx%d):\n", N, N);
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            scanf("%d", &B[i][j]);

    strassen(A, B, C);

    printf("\nResultant Matrix (C = A * B):\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }

    printf("\nTime Complexity of Strassen’s Algorithm: O(n^log7) ≈ O(n^2.81)\n");

    return 0;
}

