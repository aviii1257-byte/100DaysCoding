//Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/
#include<stdio.h>
int main(){
    int i,n;
    int sum=0;
    printf("Enter n:");
    scanf("%d",&n);
    for(i=1; i<n+1; i++)
    sum = sum + 2*i-1;
    printf("Sum:%d",sum);
    return 0;
}
//Q28: Write a program to print the product of even numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/
#include <stdio.h>
int main()
{
    int n,i;
    int product = 1;
    printf("Enter n:");
    scanf("%d", &n);

    for(i = 2; i <= n; i += 2)
    {
        product = product * i;
    }
    printf("Product:%d",product);
    return 0;
}