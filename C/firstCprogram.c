//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    printf("Enter the length of the rectangle");
    scanf("%d",&a);
    printf("Enter the breadth of the rectangle");
    scanf("%d",&b);
    c=a*b;
     printf("Area:%d\n",c);
    d=2*(a+b);
    printf("Perimeter:%d\n",d);
    printf("Enter the length of the rectangle");
    scanf("%d",&e);
    printf("Enter the breadth of the rectangle");
    scanf("%d",&f);
    c=e*f;
    printf("Area:%d\n",c);
    d=2*(e+f);
    printf("Perimeter:%d\n",d);
    return 0;
}
\\Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/
#include<stdio.h>
int main(){
    int r;
    float a;
    float b;
    printf("Enter the radius of the circle");
    scanf("%d",&r);
    a=3.14*r*r;
    printf("Area of the circle:%f",a);
    b=2*3.14*r;
    printf("Circumference of the circle:%f",b);
    return 0;
}