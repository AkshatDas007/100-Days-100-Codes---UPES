#include <stdio.h>

int main(){
    char filename[100];
    FILE *fp;
    char ch;

    // Ask the user to enter a filename
    printf("Enter the filename: ");
    scanf("%99s", filename);

    // Try to open the file in read mode
    fp = fopen(filename, "r");

    // Check whether the file exists and was opened successfully
    if(fp == NULL){
        printf("Error: File does not exist or cannot be opened.\n");
    } else{
        printf("File contents:\n");

        // Read and display the file character by character
        while((ch = fgetc(fp)) != EOF){
            putchar(ch);
        }

        // Close the file after reading
        fclose(fp);
    }

    return 0;
}
