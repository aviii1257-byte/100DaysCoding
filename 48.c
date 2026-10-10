//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/

#include <stdio.h>

int main()
{
    char date[11];

        printf("Enter date (dd/mm/yyyy): ");
            scanf("%10s", date);

                printf("%.2s-Apr-%.4s\n", date, date + 6);

                    return 0;
                    }
//Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
        int i, j, k, len;

            printf("Enter a string: ");
                scanf("%99s", str);

                    len = strlen(str);

                        for (i = 0; i < len; i++)
                            {
                                    for (j = i; j < len; j++)
                                            {
                                                        for (k = i; k <= j; k++)
                                                                    {
                                                                                    printf("%c", str[k]);
                                                                                                }

                                                                                                            if (i != len - 1 || j != len - 1)
                                                                                                                            printf(",");
                                                                                                                                    }
                                                                                                                                        }

                                                                                                                                            return 0;
                                                                                                                                            }
                                                                                                                                            