#include <stdio.h>

int main()
{
    int day, month, year;

    // Store the three-letter names of all 12 months.
    char *months[] = {
        "Jan", "Feb", "Mar", "Apr",
        "May", "Jun", "Jul", "Aug",
        "Sep", "Oct", "Nov", "Dec"
    };

    // Read the date in dd/mm/yyyy format.
    scanf("%d/%d/%d", &day, &month, &year);

    // Check whether the month is valid.
    if (month < 1 || month > 12)
    {
        printf("Invalid month\n");
        return 0;
    }

    // Print the date using the month's abbreviation.
    printf("%02d-%s-%04d\n", day, months[month - 1], year);

    return 0;
}
