//Q51: Write a program to print the following pattern:
    5
   45
  345
 2345
12345

/*
Sample Test Cases:
Input 1:

Output 1:
    5
   45
  345
 2345
12345

*/
#include <stdio.h>

int main()
{
    int i, j;

    for (i = 5; i >= 1; i--)
    {
        for (j = i; j <= 5; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
//Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*



/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/
#include <stdio.h>

int main()
{
    int i, j, stars;

    for (i = 1; i <= 5; i++)
    {
        if (i <= 3)
            stars = 2 * i - 1;
        else
            stars = 2 * (6 - i) - 1;

        for (j = 1; j <= stars; j++)
        {
            printf("*\n");
        }

        printf("\n");
    }

    return 0;
}