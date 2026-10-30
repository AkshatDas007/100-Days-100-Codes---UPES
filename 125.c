#include <stdio.h>

int main(){
    FILE *fp;
    char filename[100], text[200];

    // Ask the user for the existing filename
    printf("Enter the filename: ");
    scanf("%99s", filename);

    // Open the file in append mode
    fp = fopen(filename, "a");

    // Check whether the file opened successfully
    if(fp == NULL){
    printf("Error opening the file!\n");
    return 1;
    }

    // Clear the newline left by scanf()

    getchar();

    // Ask the user for the new line of text
    printf("Enter the text to append: ");
    fgets(text, sizeof(text), stdin);

    // Write the new text at the end of the file
    fputs(text, fp);

    // Close the file
    fclose(fp);

    printf("Text appended successfully!\n");

    return 0;
}
