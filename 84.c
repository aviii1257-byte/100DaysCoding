//Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/
#include <stdio.h>

enum Menu
{
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main()
{
    enum Menu choice;
    int a, b;

    printf("1. ADD\n");
    printf("2. SUBTRACT\n");
    printf("3. MULTIPLY\n");

    printf("Enter choice: ");
    scanf("%d", (int *)&choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch(choice)
    {
        case ADD:
            printf("%d", a + b);
            break;

        case SUBTRACT:
            printf("%d", a - b);
            break;

        case MULTIPLY:
            printf("%d", a * b);
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}