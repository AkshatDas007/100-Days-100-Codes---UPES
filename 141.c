#include <stdio.h>
#include <string.h>

// Define structure Student
struct Student {
    char name[30];  // Stores student's name
    int roll_no;    // Stores roll number
    float marks;    // Stores student's marks
};

int main(){
    struct Student s; // Create a structure variable

    // Read student's name
    printf("Enter student name: ");
    fgets(s.name, sizeof(s.name), stdin);

    //Remove newline added by fgets()
    s.name[strcspn(s.name, "\n")] = '\0';

    // Read roll number
    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);

    // Read marks
    printf("Enter marks: ");
    scanf("%f", &s.marks);

    // Display student details
    printf("\nStudent Details\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}
