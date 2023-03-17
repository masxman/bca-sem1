#include <stdio.h>

void input_matrix(int rows, int cols, int matrix[][cols]);
void display_matrix(int rows, int cols, int matrix[][cols]);
void add_matrices(int rows, int cols, int matrix1[][cols], int matrix2[][cols], int result[][cols]);
void subtract_matrices(int rows, int cols, int matrix1[][cols], int matrix2[][cols], int result[][cols]);

int main() {
    int rows, cols;
    printf("Enter the number of rows and columns of the matrices: ");
    scanf("%d %d", &rows, &cols);

    int matrix1[rows][cols], matrix2[rows][cols], sum[rows][cols], difference[rows][cols];

    printf("Enter the elements of the first matrix:\n");
    input_matrix(rows, cols, matrix1);

    printf("Enter the elements of the second matrix:\n");
    input_matrix(rows, cols, matrix2);

    add_matrices(rows, cols, matrix1, matrix2, sum);
    subtract_matrices(rows, cols, matrix1, matrix2, difference);

    printf("The sum of the matrices is:\n");
    display_matrix(rows, cols, sum);

    printf("The difference of the matrices is:\n");
    display_matrix(rows, cols, difference);

    return 0;
}

void input_matrix(int rows, int cols, int matrix[][cols]) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void display_matrix(int rows, int cols, int matrix[][cols]) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void add_matrices(int rows, int cols, int matrix1[][cols], int matrix2[][cols], int result[][cols]) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void subtract_matrices(int rows, int cols, int matrix1[][cols], int matrix2[][cols], int result[][cols]) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}

