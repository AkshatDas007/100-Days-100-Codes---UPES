#include <stdio.h>

int main(){
    char name[100];
    int age;

    // Ask the user for their name
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);


    // Ask the user for their age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Open the file in write mode
    FILE *fp = fopen("info.txt", "w");

    // Check whether the file opened successfully
    if(fp == NULL){
        printf("Error Opening File.\n");
        return 1;
    }

    // Write the name and age into the file
    fprintf(fp, "Name: %s\nAge: %d\n", name, age);

    // Close the file to save the data
    fclose(fp);

    // Display a confirmation message
    printf("Data saved successfully.\n");

    return 0;
}
