//Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], temp[200];

        printf("Enter first string: ");
            scanf("%s", str1);

                printf("Enter second string: ");
                    scanf("%s", str2);

                        if (strlen(str1) != strlen(str2))
                            {
                                    printf("Not rotation");
                                        }
                                            else
                                                {
                                                        strcpy(temp, str1);
                                                                strcat(temp, str1);

                                                                        if (strstr(temp, str2) != NULL)
                                                                                    printf("Rotation");
                                                                                            else
                                                                                                        printf("Not rotation");
                                                                                                            }

                                                                                                                return 0;
                                                                                                                }
//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
        int i, start = 0, end;

            printf("Enter a sentence: ");
                fgets(str, sizeof(str), stdin);

                    for (i = 0; str[i] != '\0'; i++)
                        {
                                if (str[i] == ' ' || str[i] == '\n')
                                        {
                                                    end = i - 1;

                                                                while (start < end)
                                                                            {
                                                                                            char temp = str[start];
                                                                                                            str[start] = str[end];
                                                                                                                            str[end] = temp;

                                                                                                                                            start++;
                                                                                                                                                            end--;
                                                                                                                                                                        }

                                                                                                                                                                                    start = i + 1;
                                                                                                                                                                                            }
                                                                                                                                                                                                }

                                                                                                                                                                                                    printf("%s", str);

                                                                                                                                                                                                        return 0;
                                                                                                                                                                                                        }