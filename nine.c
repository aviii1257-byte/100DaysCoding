//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/
#include<stdio.h>
int main(){
float a,b,c;
printf("Enter three sides:");
scanf("%f %f %f",&a,&b,&c);
if (a + b <= c || a + c <= b || b + c <= a)
{
printf("Not a valid triangle");
}
else if (a == b && b == c)
{
printf("Equilateral triangle");
}
else if (a == b || b == c || a == c)
{
printf("Isosceles triangle");
}
else
{
printf("Scalene triangle");
}
    return 0;
}
//Q20: Write a program to display the day of the week based on a number (1–7) using switch-case.

/*
Sample Test Cases:
Input 1:
1
Output 1:
Monday

Input 2:
5
Output 2:
Friday

*/
#include <stdio.h>

int main()
{
int day;

printf("Enter a number (1-7): ");
scanf("%d", &day);

switch(day)
{
case 1:
printf("Monday");
break;

case 2:
printf("Tuesday");
break;

case 3:
printf("Wednesday");
break;

case 4:
printf("Thursday");
break;

case 5:
printf("Friday");
break;

case 6:
printf("Saturday");
break;

case 7:
printf("Sunday");
break;

default:
printf("Invalid input");
}
return 0;
}