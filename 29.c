//Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/
#include <stdio.h>

int main() {
    int n, i, key, found = 0;
        int a[100];

            scanf("%d", &n);

                for (i = 0; i < n; i++) {
                        scanf("%d", &a[i]);
                            }

                                scanf("%d", &key);

                                    for (i = 0; i < n; i++) {
                                            if (a[i] == key) {
                                                        printf("Found at index %d", i);
                                                                    found = 1;
                                                                                break;
                                                                                        }
                                                                                            }

                                                                                                if (found == 0) {
                                                                                                        printf("-1");
                                                                                                            }

                                                                                                                return 0;
                                                                                                                }
//Q62: Reverse an array without taking extra space.

/*
Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

*/
#include <stdio.h>

int main() {
    int n, i, temp;
        int a[100];

            scanf("%d", &n);

                for (i = 0; i < n; i++) {
                        scanf("%d", &a[i]);
                            }

                                for (i = 0; i < n / 2; i++) {
                                        temp = a[i];
                                                a[i] = a[n - 1 - i];
                                                        a[n - 1 - i] = temp;
                                                            }

                                                                for (i = 0; i < n; i++) {
                                                                        printf("%d ", a[i]);
                                                                            }

                                                                                return 0;
                                                                                }