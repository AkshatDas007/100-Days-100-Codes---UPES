#include <stdio.h>
#include <string.h>

struct Student
{
    char name[50];
    int roll;
    float marks;
};

int main(){
    struct Student s[5];
    int i, highest = 0;

    //Input details of 5 students
    for(i = 0; i < 5; i++){
        printf("\nEnter details of student %d:\n", i + 1);

        printf("Enter name: ");
        fgets(s[i].name, sizeof(s[i].name), stdin);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);

        getchar();
    }

    //Find student with highest marks
    for(i = 1; i < 5; i++){
        if(s[i].marks > s[highest].marks){
            highest = i;
        }
    }

    //Display the student with highest marks
    printf("\nStudent with Highest Marks:\n");
    printf("Name: %s\n", s[highest].name);
    printf("Roll Number: %d\n", s[highest].roll);
    printf("Marks: %.2f\n", s[highest].marks);

    return 0;
}
