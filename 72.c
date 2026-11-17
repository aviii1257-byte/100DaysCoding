//Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/
#include <stdio.h>

int main()
{
    FILE *source, *destination;
    int ch;

    source = fopen("source.txt", "r");

    if(source == NULL)
    {
        printf("Error: source.txt not found!");
        return 1;
    }

    destination = fopen("destination.txt", "w");

    if(destination == NULL)
    {
        printf("Error creating destination.txt!");
        fclose(source);
        return 1;
    }

    while((ch = fgetc(source)) != EOF)
    {
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);

    printf("File copied successfully to destination.txt");

    return 0;
}