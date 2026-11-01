#include <stdio.h>
#include <ctype.h>

// Function to convert lowercase to uppercase
char convert(char ch){
    return toupper(ch);
}

int main(){

    FILE *fp1, *fp2;
    int ch;

    // Open input.txt in read mode
    fp1 = fopen("input.txt", "r");

    if(fp1 == NULL){
        printf("Error opening input file!\n");
        return 1;
    }

    // Open output.txt in write mode
    fp2 = fopen("output.txt", "w");

    if(fp2 == NULL){
        printf("Error opening output file!\n");
        fclose(fp1);
        return 1;
    }
    // Read characters until EOF
    while((ch = fgetc(fp1)) != EOF){
        // Convert character using user defined function
        ch = convert((char)ch);

        // Write converted character into output.txt
        fputc(ch, fp2);
    }

    // Close both files
    fclose(fp1);
    fclose(fp2);

    printf("Conversion successful!");
    return 0;
    }
