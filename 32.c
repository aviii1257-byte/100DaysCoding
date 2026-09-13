//Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include <stdio.h>

int main() {
    int n, pos, element;

        scanf("%d", &n);

            int arr[n + 1];

                for (int i = 0; i < n; i++) {
                        scanf("%d", &arr[i]);
                            }

                                scanf("%d %d", &pos, &element);

                                    // Shift elements to the right
                                        for (int i = n; i > pos; i--) {
                                                arr[i] = arr[i - 1];
                                                    }

                                                        // Insert element at given position
                                                            arr[pos] = element;

                                                                // Print array
                                                                    for (int i = 0; i <= n; i++) {
                                                                            printf("%d ", arr[i]);
                                                                                }

                                                                                    return 0;
                                                                                    }
//Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/
#include <stdio.h>

int main() {
    int n, pos;

        scanf("%d", &n);

            int arr[n];

                for (int i = 0; i < n; i++) {
                        scanf("%d", &arr[i]);
                            }

                                scanf("%d", &pos);

                                    // Shift elements to the left
                                        for (int i = pos; i < n - 1; i++) {
                                                arr[i] = arr[i + 1];
                                                    }

                                                        // Print array after deletion
                                                            for (int i = 0; i < n - 1; i++) {
                                                                    printf("%d ", arr[i]);
                                                                        }

                                                                            return 0;
                                                                            }
