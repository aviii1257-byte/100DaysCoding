//Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/
#include <stdio.h>
int main() 
{
    int a, b, i, lcm;
    printf("Enter a and b:");
    scanf("%d %d", &a, &b);
    for (i = 1; i <= a * b; i++) {
        if (i % a == 0 && i % b == 0) {
            lcm = i;
            break;
        }
    }
    printf("LCM:%d", lcm);
    return 0;
}
//Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/
#include <stdio.h>
int main() 
{
    int n, digit, sum = 0;
    printf("Enter n:");
    scanf("%d", &n);
    while (n != 0) 
    {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }
    printf("Sum:%d", sum);
    return 0;
}