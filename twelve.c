Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/
#include<stdio.h>
int main()
{
    int a,b;
    char op;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter operator(+,-,*,/,%%)");
    scanf(" %c",&op);
    printf("Enter second number:");
    scanf(" %d",&b);
    switch(op)
    {
        case '+':
        printf("Result:%d",a+b);
        break;
        case '-':
        printf("Result:%d",a-b);
        break;
        case '*':
        printf("Result:%d",a*b);
        break;
        case '/':
        if(b!=0){
            printf("Result:%d",a/b);
        }
        else
        {
            printf("Division by zero is not possible");
        }
        break;
        case'%':
        if(b!=0)
        {
            printf("Result:%d",a%b);
        }
        else
        {
            printf("Modulo by zero is not possible");
        }
        break;
        default:
        printf("Invalid operation");
}
    return 0;
}
//Q26:Write a program to print numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
5
Output 1:
1 2 3 4 5

Input 2:
3
Output 2:
1 2 3

*/
#include<stdio.h>
int main()
{
    int n,i;
printf("Enter n:");
scanf("%d",&n);
for(i=1; i<n; i++)
{
    printf("%d ",i);
}
return 0;
}