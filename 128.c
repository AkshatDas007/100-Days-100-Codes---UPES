#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;
    int vowels = 0, consonants = 0;

    // Open the file in read mode
    fp = fopen("Hello.txt", "r");

    // Check whether the file exists
    if (fp == NULL)
    {
        printf("File cannot be opened.");
        return 1;
    }

    // Read the file character by character
    while ((ch = fgetc(fp)) != EOF)
    {
        // Check whether the character is an alphabet
        if ((ch >= 'A' && ch <= 'Z') ||
            (ch >= 'a' && ch <= 'z'))
        {
            // Check for vowels
            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' ||
                ch == 'O' || ch == 'U')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
    }

    // Display the results
    printf("Total vowels = %d\n", vowels);
    printf("Total consonants = %d\n", consonants);

    // Close the file
    fclose(fp);

    return 0;
}
