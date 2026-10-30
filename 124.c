#include <stdio.h>

int main(){
    FILE *src, *dest;
    char source[100], destination[100];
    int ch;

    // Get filenames from the user
    printf("Enter source filename: ");
    scanf("%99s", source);

    printf("Enter destination filename: ");
    scanf("%99s", destination);

    // Open source file in read mode
    src = fopen(source, "r");

    if(src == NULL){
        printf("Error opening source file!\n");
        return 1;
    }

    //Open destination file in write mode
    dest = fopen(destination, "w");

    if(dest == NULL){
        printf("Error opening destination file!\n");
        fclose(src);
        return 1;
    }

    // Read each character and write it to destination
    while((ch = fgets(src)) != EOF){
        fputs(ch, dest);
    }

    printf("File copied successfully!\n");

    // Close both files
    fclose(src);
    fclose(dest);

    return 0;
}
