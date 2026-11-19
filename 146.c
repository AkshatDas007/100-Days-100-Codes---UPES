#include <stdio.h>

// Structure for Date
struct Date
{
    int day;
    int month;
    int year;
};

// Structure for Employee
struct Employee
{
    int id;
    char name[50];
    float salary;
    struct Date joiningDate;  // Nested structure
};

int main()
{
    struct Employee e;

    // Input employee details
    printf("Enter Employee ID: ");
    scanf("%d", &e.id);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", e.name);

    printf("Enter Salary: ");
    scanf("%f", &e.salary);

    // Input joining date
    printf("Enter Joining Date (DD MM YYYY): ");
    scanf("%d %d %d", &e.joiningDate.day,
                      &e.joiningDate.month,
                      &e.joiningDate.year);

    // Display employee details
    printf("\n--- Employee Details ---\n");

    printf("Employee ID: %d\n", e.id);
    printf("Employee Name: %s\n", e.name);
    printf("Salary: %.2f\n", e.salary);

    printf("Joining Date: %02d/%02d/%04d\n",
           e.joiningDate.day,
           e.joiningDate.month,
           e.joiningDate.year);

    return 0;
}
