//Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/
#include <stdio.h>

int main() {
    int rows, cols;
        int matrix[100][100];
            int rowSum[100];

                scanf("%d %d", &rows, &cols);

                    // Read matrix and calculate row sums
                        for (int i = 0; i < rows; i++) {
                                rowSum[i] = 0;

                                        for (int j = 0; j < cols; j++) {
                                                    scanf("%d", &matrix[i][j]);
                                                                rowSum[i] += matrix[i][j];
                                                                        }
                                                                            }

                                                                                // Print row sums
                                                                                    for (int i = 0; i < rows; i++) {
                                                                                            printf("%d ", rowSum[i]);
                                                                                                }

                                                                                                    return 0;
                                                                                                    }
//Q74: Find the transpose of a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

*/
#include <stdio.h>

int main() {
    int rows, cols;
        int matrix[100][100];

            scanf("%d %d", &rows, &cols);

                // Read matrix
                    for (int i = 0; i < rows; i++) {
                            for (int j = 0; j < cols; j++) {
                                        scanf("%d", &matrix[i][j]);
                                                }
                                                    }

                                                        // Print transpose
                                                            for (int j = 0; j < cols; j++) {
                                                                    for (int i = 0; i < rows; i++) {
                                                                                printf("%d ", matrix[i][j]);
                                                                                        }
                                                                                                printf("\n");
                                                                                                    }

                                                                                                        return 0;
                                                                                                        }