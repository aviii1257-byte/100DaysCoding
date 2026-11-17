//Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
        int count[256] = {0};
            int i;

                printf("Enter first string: ");
                    scanf("%s", str1);

                        printf("Enter second string: ");
                            scanf("%s", str2);

                                if (strlen(str1) != strlen(str2))
                                    {
                                            printf("Not anagrams");
                                                    return 0;
                                                        }

                                                            for (i = 0; str1[i] != '\0'; i++)
                                                                {
                                                                        count[str1[i]]++;
                                                                                count[str2[i]]--;
                                                                                    }

                                                                                        for (i = 0; i < 256; i++)
                                                                                            {
                                                                                                    if (count[i] != 0)
                                                                                                            {
                                                                                                                        printf("Not anagrams");
                                                                                                                                    return 0;
                                                                                                                                            }
                                                                                                                                                }

                                                                                                                                                    printf("Anagrams");

                                                                                                                                                        return 0;
                                                                                                                                                               }
//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[200], word[50], longest[50];
        int i = 0, j = 0, max = 0;

            printf("Enter a sentence: ");
                fgets(str, sizeof(str), stdin);

                    while (str[i] != '\0')
                        {
                                if (str[i] != ' ' && str[i] != '\n')
                                        {
                                                    word[j] = str[i];
                                                                j++;
                                                                        }
                                                                                else
                                                                                        {
                                                                                                    word[j] = '\0';

                                                                                                                if (j > max)
                                                                                                                            {
                                                                                                                                            max = j;
                                                                                                                                                            strcpy(longest, word);
                                                                                                                                                                        }

                                                                                                                                                                                    j = 0;
                                                                                                                                                                                            }

                                                                                                                                                                                                    i++;
                                                                                                                                                                                                        }

                                                                                                                                                                                                            printf("%s", longest);

                                                                                                                                                                                                                return 0;
                                                                                                                                                                                                                }