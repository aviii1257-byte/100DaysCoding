//Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 1.56

Input 2:
5
Output 2:
Approximate sum: 2.22

*/
#include <stdio.h>

int main()
{
    int n, i;
    float sum = 0;
    float numerator = 2, denominator = 3;
    printf("Enter n:");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum = sum + numerator / denominator;

        numerator = numerator + 2;
        denominator = denominator + 4;
    }

    printf("Approximate sum: %.2f", sum);

    return 0;
}
//Q46: Write a program to print the following pattern:
*****
*****
*****
*****
*****

/*
Sample Test Cases:
Input 1:

Output 1:
*****
*****
*****
*****
*****

*/
#include <stdio.h>

int main()
{
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}