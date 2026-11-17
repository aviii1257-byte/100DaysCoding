//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>
int main() {
    int num, original, remainder, sum = 0;
    printf("Enter number:");
    scanf("%d", &num);
    original = num;
    while (num != 0)
     {
        remainder = num % 10;
        sum += remainder * remainder * remainder;
        num /= 10;
    }
    if (sum == original)
       {
         printf("Armstrong");
       }
       else
       {
         printf("Not Armstrong");
       }
    return 0;
}
//Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
#include <stdio.h>
int main() {
    int n, i, isPrime = 1;
    printf("Enter n:");
    scanf("%d", &n);
    if (n <= 1) 
    {
        isPrime = 0;
    } 
    else 
    {
        for (i = 2; i < n; i++)
         {
            if (n % i == 0)
             {
                isPrime = 0;
                break;
            }
        }
    }
    if (isPrime)
       {
         printf("Prime");
       }
       else
       {
        printf("Not prime");
       }
    return 0;
}