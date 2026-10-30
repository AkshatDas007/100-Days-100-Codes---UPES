#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    // Read a string without spaces.
    scanf("%99s", str);

    int n = strlen(str);

    // Select the starting position of a substring.
    for (int i = 0; i < n; i++)
    {
        // Select the ending position.
        for (int j = i; j < n; j++)
        {
            // Print characters from i through j.
            for (int k = i; k <= j; k++)
            {
                printf("%c", str[k]);
            }

            // Print each substring on a new line.
            printf("\n");
        }
    }

    return 0;
}
