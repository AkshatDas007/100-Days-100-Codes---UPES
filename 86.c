// Q 84: Check if a string is a palindrome.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, length, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    length = strlen(str);

    for (i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - 1 - i])
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        printf("The string is a palindrome.");
    else
        printf("The string is not a palindrome.");

    return 0;
}
