//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

/*
Sample Test Cases:
Input 1:
A
Output 1:
Uppercase alphabet

Input 2:
a
Output 2:
Lowercase alphabet

Input 3:
3
Output 3:
Digit

Input 4:
#
Output 4:
Special character

*/
#include<stdio.h>
int main(){
    char c;
    printf("Enter a character");
    scanf("%c",&c);
if (c>='A' && c<='Z')
{
    printf("Uppercase alphabet");
}
else if(c>='a' && c<='z')
{
    printf("Lowercase alphabet");
}
else if(c>='0' && c<='9')
{
    printf("Digit");
}
else
{
    printf("Special character");
}
return 0;
}
//Q16: Write a program to input three numbers and find the largest among them using if–else.

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/
#include<stdio.h>
int main(){
    int a,b,c;
printf("Enter three numbers:");
scanf("%d %d %d",&a,&b,&c);
if(a>b && a>c)
{
    printf("Largest=%d",a);
}
else if(b>a && b>c)
{
    printf("Largest=%d",b);
}
else{
    printf("Largest=%d",c);
}
return 0;
}