//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int i, j, k;
    int count, max = 0;
    int repeat;

    printf("Enter string: ");
    scanf("%s", s);

    for(i = 0; i < strlen(s); i++)
    {
        count = 0;

        for(j = i; j < strlen(s); j++)
        {
            repeat = 0;

            // Check if s[j] already appeared
            for(k = i; k < j; k++)
            {
                if(s[k] == s[j])
                {
                    repeat = 1;
                    break;
                }
            }

            if(repeat == 1)
                break;

            count++;
        }

        if(count > max)
            max = count;
    }

    printf("%d\n", max);

    return 0;
}