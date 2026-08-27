//Q35: Write a program to print all factors of a given number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
1 2 3 6

Input 2:
10
Output 2:
1 2 5 10

*/
#include <stdio.h>
int main() 
{
    int n, i;
    printf("Enter n:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
     {
        if (n % i == 0) 
        {
            printf("%d ", i);
        }
    }
    return 0;
}
//Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/
#include <stdio.h>
int main()
{
    int a, b, i, hcf = 1;
    printf("Enter a and b:");
    scanf("%d %d", &a, &b);

    for (i = 1; i <= a && i <= b; i++) 
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
    }
    printf("HCF:%d", hcf);
    return 0;
}