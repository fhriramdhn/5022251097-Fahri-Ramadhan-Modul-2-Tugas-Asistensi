#include <stdio.h>

#define N 3  // ukuran matriks

void read_matrix(int M[N][N]) {
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            scanf("%d", &M[i][j]); // %d karena pakai int
}

void multiply(int A[N][N], int B[N][N], int C[N][N]) {
    int sum;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            sum = 0;
            for (int k = 0; k < N; k++) {
                sum += A[i][k] * B[k][j];
            }
            C[i][j] = sum;
        }
    }
}

void print_matrix(int M[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", M[i][j]); // pakai %d bukan %c
        }
        printf("\n");
    }
}

int main(void) {
    int A[N][N], B[N][N], C[N][N];

    read_matrix(A);
    read_matrix(B); // tambahkan ; yang hilang

    multiply(A, B, C);

    printf("Hasil Kali matrix: \n");
    print_matrix(C);
    return 0;
}
