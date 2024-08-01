#include <stdio.h>

#define MAX 100 // Define a maximum size for the matrix

void readMatrix(int matrix[MAX][MAX], int rows, int cols) {
    printf("Enter the elements of the matrix (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[MAX][MAX], int rows, int cols) {
    printf("Matrix (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

void transposeMatrix(int matrix[MAX][MAX], int transposed[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
}

int main() {
    int matrix[MAX][MAX], transposed[MAX][MAX];
    int rows, cols;

    printf("Enter the number of rows and columns of the matrix:\n");
    scanf("%d %d", &rows, &cols);

    if (rows > MAX || cols > MAX) {
        printf("Error: Matrix size exceeds the maximum limit of %d x %d.\n", MAX, MAX);
        return 1;
    }

    readMatrix(matrix, rows, cols);

    printf("\nOriginal Matrix:\n");
    printMatrix(matrix, rows, cols);

    transposeMatrix(matrix, transposed, rows, cols);

    printf("\nTransposed Matrix:\n");
    printMatrix(transposed, cols, rows);

    return 0;
}
