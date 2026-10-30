
#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fp;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;
    int lastChar = '\n';

    // Open the existing file in read mode
    fp = fopen("info.txt", "r");

    // Check if the file opened successfully
    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    // Read the file character by character
    while ((ch = fgetc(fp)) != EOF)
    {
        characters++;

        // Count lines using newline characters
        if (ch == '\n')
        {
            lines++;
        }

        // Count words separated by spaces or newlines
        if (isspace((unsigned char)ch))
        {
            inWord = 0;
        }
        else if (inWord == 0)
        {
            words++;
            inWord = 1;
        }

        lastChar = ch;
    }

    // Count the last line if it doesn't end with a newline
    if (characters > 0 && lastChar != '\n')
    {
        lines++;
    }

    // Display the results
    printf("Total characters = %d\n", characters);
    printf("Total words = %d\n", words);
    printf("Total lines = %d\n", lines);

    // Close the file
    fclose(fp);

    return 0;
}
