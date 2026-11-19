#include <stdio.h>
#include <string.h>

//Define enum with three gender option
enum Gender {
    MALE, FEMALE, OTHER,
};

//Define structure Person
struct Person {
    char name[50];  // Stores person's name
    enum Gender gender; // Stores person's gender
};

int main(){
    struct Person p; // Create a structure variable
    int choice; // Stores the user's gender choices

    // Read person's name
    printf("Enter name: ");
    fgets(p.name, sizeof(p.name), stdin);

    //Remove newline added by fgets()
    p.name[strcspn(p.name, "\n")] = '\0';

    // Read gender choice
    printf("Enter gender(0- MALE, 1 - FEMALE, 2- OTHER): ");
    scanf("%d", &choice);

    // Assign choice to enum variable
    p.gender = choice;

    // Print person's name
    printf("\nName: %s\n", p.name);

    //Check gender and print corresponding message
    switch(p.gender) {
        case MALE:
            printf("Gender: Male\n");
            break;

        case FEMALE:
            printf("Gender: Female\n");
            break;

        case OTHER:
            printf("Gender: Other\n");
            break;

        default:
            printf("Not a Gender\n");
    }

    return 0;
}

