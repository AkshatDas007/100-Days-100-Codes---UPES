#include <stdio.h>

// 1. Define a structure to group a student's details together
struct Student {
    int id;
    char name[50];   // Array of 50 characters for the name
    float marks;
};

int main() {
    int n;

    // 2. Create an array that can hold up to 100 students
    struct Student students[100];

    printf("How many students (up to 100)? ");
    scanf("%d", &n);

    // 3. Loop to get input for all students
    for (int i = 0; i < n; i++) {
        printf("\n--- Student %d ---\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &students[i].id);

        printf("Enter Name (first name only): ");
        scanf("%s", students[i].name);

        printf("Enter Marks: ");
        scanf("%f", &students[i].marks);
    }

    // 4. Loop to print all saved students at the end
    printf("\n=== Student List ===\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d | Name: %s | Marks: %.2f\n",
               students[i].id, students[i].name, students[i].marks);
    }

    return 0;
}
