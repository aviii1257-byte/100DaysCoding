//Q7: Write a program to swap two numbers without using a third variable.

/*
Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10

Input 2:
7 14
Output 2:
After swap: 14 7

*/
#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    int d;
    printf("Insert two numbers");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swap:%d %d",a,b);
    printf("Insert two numbers");
    scanf("%d %d",&c,&d);
    c=c+d;
    d=c-d;
    c=c-d;
    printf("After swap:%d %d",c,d);
    return 0;
}
//Q8: Write a program to find and display the sum of the first n natural numbers.

/*
Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55

*/
#include<stdio.h>
int main(){
int n;
int i;
int m;
int sum=0;
printf("Enter a number:");
scanf("%d",&n);
for(i=1;i<=n; i++)
{
sum=sum+i;
}
printf("Sum=%d",sum);
printf("Enter a number:");
scanf("%d",&m);
sum=0;
for(i=1;i<=m; i++)
{
sum=sum+i;
}
printf("Sum=%d",sum);
return 0;
}