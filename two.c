//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
#include<stdio.h>
int main(){
    float a;
    float b;
    float c;
    printf("Enter the temperature in celcius:");
    scanf("%f",&a);
    c=(a*9/5)+32;
    printf("Temperature in fahrenheit:%f",c);
    printf("\nEnter the temperature in celcius:");
    scanf("%f",&b);
    c=(b*9/5)+32;
    printf("Temperature in fahrenheit:%f",c);
    return 0;
}
//Q6: Write a program to swap two numbers using a third variable.

/*
Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/
#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    int d;
    int e;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("After swapping:\n");
    printf("a:%d\n",a);
    printf("b:%d\n",b);
    printf("Enter two numbers:");
    scanf("%d%d",&d,&e);
    c=d;
    d=e;
    e=c;
    printf("After swapping:\n");
    printf("d:%d\n",d);
    printf("e:%d\n",e);
    return 0;
}