#include <stdio.h>

struct Student{
    char name[50];
    int roll;
    float marks;
};

// Function to write student records into file
void write(){
    FILE *fp;
    struct Student s;
    int n, i;

    fp = fopen("students.txt", "w");

    if(fp == NULL){
        printf("File cannot be opened");
        return;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        printf("\nEnter details of student %d:\n", i);

        printf("Enter name: ");
        scanf("%49s", s.name);

        printf("Enter roll number: ");
        scanf("%d", &s.roll);

        printf("Enter marks: ");
        scanf("%f", &s.marks);

        // Write record into file
        fprintf(fp, "%s %d %.2f\n", s.name, s.roll, s.marks);
    }

    fclose(fp);
}

// Function to read and display student records
void read(){
    FILE *fp;
    struct Student s;
    int n, i;

    fp = fopen("students.txt", "r");

    if(fp == NULL){
        printf("File cannot be opened");
        return;
    }

    printf("\n-----Student Records-----\n");

    // Read records until EOF
    while(fscanf(fp, "%49s %d %f", s.name, &s.roll, &s.marks) == 3){
        printf("\nName: %s", s.name);
        printf("\nRoll Number: %d", s.roll);
        printf("\nMarks: %.2f\n", s.marks);
    }
    fclose(fp);
}

// Main function
int main(){
    write();
    read();

    return 0;
}
