//Q140: Define a struct with enum Gender and print person's gender.

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/
#include <stdio.h>

enum Gender
{
    MALE,
    FEMALE
};

struct Person
{
    char name[50];
    enum Gender gender;
};

int main()
{
    struct Person p;

    p.gender = MALE;

    if(p.gender == MALE)
    {
        printf("Male");
    }
    else
    {
        printf("Female");
    }

    return 0;
}