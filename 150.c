#include <stdio.h>

struct Student {
    int id;
    char name[30];
    float marks;
};

int main(){
    struct Student s;

    // A pointer stores the address of another variable
    //Here, ptr stores the address of structure variable s.
    struct Student *ptr = &s;

    // The -> operator accesses structure members through a pointer
    // For example, ptr->id is the same as (*ptr).id.

    printf("Enter ID: ");
    scanf("%d", &ptr->id);

    printf("Enter name: ");
    scanf(" %29[^\n]", ptr->name);

    printf("Enter Marks: ");
    scanf("%f", &ptr->marks);

    printf("\n--- Student Details ---\n");
    printf("ID: %d\n", ptr->id);
    printf("Name: %s\n", ptr->name);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}
