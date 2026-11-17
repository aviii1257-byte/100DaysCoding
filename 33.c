//Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include <stdio.h>
#include <limits.h>

int main() {
    int n;

        scanf("%d", &n);

            int arr[n];

                for (int i = 0; i < n; i++) {
                        scanf("%d", &arr[i]);
                            }

                                int largest = INT_MIN;
                                    int secondLargest = INT_MIN;

                                        for (int i = 0; i < n; i++) {
                                                if (arr[i] > largest) {
                                                            secondLargest = largest;
                                                                        largest = arr[i];
                                                                                }
                                                                                        else if (arr[i] > secondLargest && arr[i] != largest) {
                                                                                                    secondLargest = arr[i];
                                                                                                            }
                                                                                                                }

                                                                                                                    printf("%d", secondLargest);

                                                                                                                        return 0;
                                                                                                                        }
//Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
#include <stdio.h>

int main() {
    int n, k;

        scanf("%d", &n);

            int arr[n];

                for (int i = 0; i < n; i++) {
                        scanf("%d", &arr[i]);
                            }

                                scanf("%d", &k);

                                    // If k is greater than n
                                        k = k % n;

                                            // Rotate right k times
                                                for (int j = 0; j < k; j++) {
                                                        int last = arr[n - 1];

                                                                for (int i = n - 1; i > 0; i--) {
                                                                            arr[i] = arr[i - 1];
                                                                                    }

                                                                                            arr[0] = last;
                                                                                                }

                                                                                                    for (int i = 0; i < n; i++) {
                                                                                                            printf("%d ", arr[i]);
                                                                                                                }

                                                                                                                    return 0;
                                                                                                                    }