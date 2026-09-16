//Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/
#include <stdio.h>

int main() {
    int rows, cols;
        int matrix1[100][100], matrix2[100][100], sum[100][100];

            scanf("%d %d", &rows, &cols);

                // Read first matrix
                    for (int i = 0; i < rows; i++) {
                            for (int j = 0; j < cols; j++) {
                                        scanf("%d", &matrix1[i][j]);
                                                }
                                                    }

                                                        // Read second matrix
                                                            for (int i = 0; i < rows; i++) {
                                                                    for (int j = 0; j < cols; j++) {
                                                                                scanf("%d", &matrix2[i][j]);
                                                                                        }
                                                                                            }

                                                                                                // Add matrices
                                                                                                    for (int i = 0; i < rows; i++) {
                                                                                                            for (int j = 0; j < cols; j++) {
                                                                                                                        sum[i][j] = matrix1[i][j] + matrix2[i][j];
                                                                                                                                }
                                                                                                                                    }

                                                                                                                                        // Print result
                                                                                                                                            for (int i = 0; i < rows; i++) {
                                                                                                                                                    for (int j = 0; j < cols; j++) {
                                                                                                                                                                printf("%d ", sum[i][j]);
                                                                                                                                                                        }
                                                                                                                                                                                printf("\n");
                                                                                                                                                                                    }

                                                                                                                                                                                        return 0;
                                                                                                                                                                                        }
//Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
#include <stdio.h>

int main() {
    int n;
        int matrix[100][100];
            int symmetric = 1;

                scanf("%d", &n);

                    // Read matrix
                        for (int i = 0; i < n; i++) {
                                for (int j = 0; j < n; j++) {
                                            scanf("%d", &matrix[i][j]);
                                                    }
                                                        }

                                                            // Check symmetry
                                                                for (int i = 0; i < n; i++) {
                                                                        for (int j = 0; j < n; j++) {
                                                                                    if (matrix[i][j] != matrix[j][i]) {
                                                                                                    symmetric = 0;
                                                                                                                    break;
                                                                                                                                }
                                                                                                                                        }

                                                                                                                                                if (symmetric == 0) {
                                                                                                                                                            break;
                                                                                                                                                                    }
                                                                                                                                                                        }

                                                                                                                                                                            if (symmetric == 1) {
                                                                                                                                                                                    printf("True");
                                                                                                                                                                                        } else {
                                                                                                                                                                                                printf("False");
                                                                                                                                                                                                    }

                                                                                                                                                                                                        return 0;
                                                                                                                                                                                                        }