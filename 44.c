//Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/
#include <stdio.h>

int main() {
    char str[100];
        int i;

            scanf("%s", str);

                for (i = 0; str[i] != '\0'; i++) {
                        if (str[i] != 'a' && str[i] != 'e' &&
                                    str[i] != 'i' && str[i] != 'o' &&
                                                str[i] != 'u' && str[i] != 'A' &&
                                                            str[i] != 'E' && str[i] != 'I' &&
                                                                        str[i] != 'O' && str[i] != 'U') {
                                                                                    
                                                                                                printf("%c", str[i]);
                                                                                                        }
                                                                                                            }

                                                                                                                return 0;
                                                                                                                }
//Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>

int main() {
    char str[100];
        int freq[26] = {0};
            int i;

                scanf("%s", str);

                    for (i = 0; str[i] != '\0'; i++) {
                            if (str[i] >= 'a' && str[i] <= 'z') {
                                        freq[str[i] - 'a']++;

                                                    if (freq[str[i] - 'a'] == 2) {
                                                                    printf("%c", str[i]);
                                                                                    return 0;
                                                                                                }
                                                                                                        }
                                                                                                            }

                                                                                                                return 0;
                                                                                                                }