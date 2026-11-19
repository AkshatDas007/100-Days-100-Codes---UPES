#include <stdio.h>
#include <string.h>

//Define a structure
struct Student {
    int roll;
    char name[50];
    float marks;
};

int main(){
    //Declare an array of 5 structures
    struct Student s[5];

    int i;

    // Input details of 5 students
    for(i = 0; i < 5; i++){
        printf("\nEnter details of Student: %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll);

        getchar();

        printf("Enter Name: ");
        fgets(s[i].name, sizeof(s[i].name), stdin);


        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);

    }

    //Display details of all students
    printf("\n------ Student Details ------\n");

    for(i = 0; i < 5; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number: %d\n", s[i].roll);
        printf("Name: %s\n", s[i].name);
        printf("Marks: %.2f\n", s[i].marks);
    }

    return 0;
}
