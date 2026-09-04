#include <stdio.h>

int main()
{
    int n, original, first, last, digits = 1, middle, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    last = n % 10;          // Get last digit

    while (n >= 10)
    {
        n = n / 10;
        digits = digits * 10;
    }

    first = n;              // Get first digit

    middle = (original % digits) / 10;

    result = last * digits + middle * 10 + first;

    printf("Number after swapping = %d", result);

    return 0;
}
