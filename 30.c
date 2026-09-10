//Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/#include <stdio.h>

int main() {
    int n, m, i;
        int a[100], b[100], c[200];

            scanf("%d", &n);

                for (i = 0; i < n; i++) {
                        scanf("%d", &a[i]);
                            }

                                scanf("%d", &m);

                                    for (i = 0; i < m; i++) {
                                            scanf("%d", &b[i]);
                                                }

                                                    // Copy first array
                                                        for (i = 0; i < n; i++) {
                                                                c[i] = a[i];
                                                                    }

                                                                        // Copy second array
                                                                            for (i = 0; i < m; i++) {
                                                                                    c[n + i] = b[i];
                                                                                        }

                                                                                            // Print merged array
                                                                                                for (i = 0; i < n + m; i++) {
                                                                                                        printf("%d ", c[i]);
                                                                                                            }
                                                                                                        return 0;
                                                                                                        }
//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>

int main() {
    long long n;
        int digit, i;
            int freq[10] = {0};
                int max = 0, result = 0;

                    scanf("%lld", &n);

                        while (n > 0) {
                                digit = n % 10;
                                        freq[digit]++;
                                                n = n / 10;
                                                    }

                                                        for (i = 0; i < 10; i++) {
                                                                if (freq[i] > max) {
                                                                            max = freq[i];
                                                                                        result = i;
                                                                                                }
                                                                                                    }

                                                                                                        printf("%d", result);

                                                                                                            return 0;
                                                                                                            }