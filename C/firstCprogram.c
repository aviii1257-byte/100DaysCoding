//Q1: Write a program to input two numbers and display their sum.

/*
Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19

*/
#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("Sum:%d\n",c);
    printf("Enter two numbers");
    scanf("%d%d",&d,&e);
    f=d+e;
    printf("Sum:%d",f);
    return 0;
}
//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;
    int h;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("\nSum:%d",c);
    d=a-b;
    printf("\nDifference:%d",d);
    e=a*b;
    printf("\nProduct:%d",e);
    f=a/b;
    printf("\nQuotient:%d",f);
    printf("Enter two numbers");
    scanf("%d%d",&g,&h);
    c=g+h;
    printf("\nSum:%d",c);
    d=g-h;
    printf("\nDifference:%d",d);
    e=g*h;
    printf("\nProduct:%d",e);
    f=g/h;
    printf("\nQuotient:%d",f);
    return 0;
}