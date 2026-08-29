//Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include <stdio.h>
int main()
{
    int n, digit, product = 1;
    printf("Enter n:");
    scanf("%d", &n);
    while (n > 0)
    {
        digit = n % 10;
        if (digit % 2 != 0)
        {
            product = product * digit;
        }
        n = n / 10;
    }
    printf("Product:%d", product);
    return 0;
}
//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include <stdio.h>
int main()
{
    char n[100];
    printf("Enter n:");
    scanf("%s", n);
    for (int i = 0; n[i] != '\0'; i++)
    {
        if (n[i] == '0')
            printf("1");
        else
            printf("0");
    }
    return 0;
}