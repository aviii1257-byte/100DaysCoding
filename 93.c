//Q145: Return a structure containing top student's details from a function.

/*
Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

*/
#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    int marks;
};

struct Student findTop(struct Student s[], int n)
{
    int i;
    struct Student top = s[0];

    for(i = 1; i < n; i++)
    {
        if(s[i].marks > top.marks)
        {
            top = s[i];
        }
    }

    return top;
}

int main()
{
    struct Student s[100], top;
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);

        printf("Enter marks: ");
        scanf("%d", &s[i].marks);
    }

    top = findTop(s, n);

    printf("Top Student: %s | Roll: %d | Marks: %d",
           top.name, top.roll, top.marks);

    return 0;
}