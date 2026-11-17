//Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

/*
Sample Test Cases:
Input 1:
2020
Output 1:
Leap year

Input 2:
1900
Output 2:
Not a leap year

Input 3:
2000
Output 3:
Leap year

*/
#include<stdio.h>
int main(){
    int year;
    printf("Enter a year");
    scanf("%d",&year);
    if (year % 400==0)
    {
printf("Leap year");
    }
    else if(year % 4 ==0 && year % 100!=0)
    {
        printf("Leap year");
    }
else
{
    printf("Not a leap year");
}
return 0;
}
//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

/*
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/
#include<stdio.h>
int main(){
    char c;
    printf("Enter a character");
    scanf("%c",&c);
    if(c== 'a'|| c== 'e'|| c=='i'|| c=='o'|| c=='u'||
    c=='A'|| c=='E'|| c=='I'|| c=='O'|| c=='U')
    {
        printf("vowel");
    } 
    else
    {
        printf("Consonant");
    }
    return 0;
}