//Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

/*
Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/
#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *input;
    FILE *output;
    int ch;

    /* Create input.txt */
    input = fopen("input.txt", "w");

    if (input == NULL)
    {
        printf("Error creating input file.");
        return 1;
    }

    fprintf(input, "Hello World\nC programming");
    fclose(input);

    /* Open input.txt for reading */
    input = fopen("input.txt", "r");
    output = fopen("output.txt", "w");

    if (input == NULL || output == NULL)
    {
        printf("Error opening file.");
        return 1;
    }

    while ((ch = fgetc(input)) != EOF)
    {
        fputc(toupper(ch), output);
    }

    fclose(input);
    fclose(output);

    printf("File converted successfully.");

    return 0;
}