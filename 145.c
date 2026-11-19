#include <stdio.h>

struct Student{
    char name[50];
    int roll;
    float marks;
};

// Function student
struct Student findTopper(struct Student s[], int n){
    int i, max = 0;
    for(i = 1; i < n; i++){
        if(s[i].marks > s[max].marks){
            max = i;
        }
    }

    return s[max];
}

int main(){
    struct Student s[5], topper;
    int i;

    // Input student details
    for(i = 0; i < 5; i++){
        printf("\nEnter details of student %d:\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Marks: ");
        scanf("%f", &s[i].marks);

    }

    // Receive returned structure
    topper = findTopper(s, 5);

    // Display topper details
    printf("\n--- Top Student Details ---\n");
    printf("Name: %s\n", topper.name);
    printf("Roll Number: %d\n", topper.roll);
    printf("Marks: %.2f\n", topper.marks);

    return 0;
}
