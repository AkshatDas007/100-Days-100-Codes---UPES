#include <stdio.h>
#include <string.h>

//Structure Declaration
struct Student
{
    char name[50];
    int roll;
    float marks;
};

//Function accepting structure as parameter
void display(struct Student s){
    printf("\nStudent Details:\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll);
    printf("Marks: %.2f\n", s.marks);

}

int main(){
    struct Student s1;

    //Input student details
    printf("Enter student name: ");
    fgets(s1.name, sizeof(s1.name), stdin);

    s1.name[strcspn(s1.name, "\n")] = '\0';

    printf("Enter roll number: ");
    scanf("%d", &s1.roll);

    printf("Enter marks: ");
    fflush(stdout);
    scanf("%f", &s1.marks);


    //Passing structure to function
    display(s1);

    return 0;
}
