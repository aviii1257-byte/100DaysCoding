//Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/
#include<stdio.h>
int main()
{
    int n, i, factorial = 1;
    printf("Enter the number:");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    printf("Factorial:%d", factorial);
    return 0;
}
//Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
#include <stdio.h>
int main()
{
    int n, reverse = 0, digit;
    printf("Enter the numbers:");
    scanf("%d", &n);
    while(n > 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }
    printf("After reverse:%d", reverse);
    return 0;
}