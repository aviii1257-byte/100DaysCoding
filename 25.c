//Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*

/*
Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*

*/
#include <stdio.h>

int main() {
    int i, j, asterisk;
    for (i = 1; i <= 5; i++) {
        asterisk = 2 * i - 1;

        for (j = 1; j <= asterisk; j++) {
            printf("*");
        }

        printf("\n");
    }
    for (i = 4; i >= 1; i--) {
        asterisk = 2 * i - 1;

        for (j = 1; j <= asterisk; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
//Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *


/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/
#include <stdio.h>

int main() {
    int i, j, spaces, asterisk;
    for (i = 1; i <= 4; i++) {
        spaces = 4 - i;
        asterisk = 2 * i - 1;

        for (j = 1; j <= spaces; j++) {
            printf(" ");
        }

        for (j = 1; j <= asterisk; j++) {
            printf("*");
        }

        printf("\n");
    }

    for (i = 3; i >= 1; i--) {
        spaces = 4 - i;
        asterisk = 2 * i - 1;

        for (j = 1; j <= spaces; j++) {
            printf(" ");
        }

        for (j = 1; j <= asterisk; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}