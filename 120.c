#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char s[1000];

    // Read a complete line, including spaces
    fgets(s, sizeof(s), stdin);

    int newSentence = 1;

    for(int i = 0; s[i] != '\0'; i++){

        // Capitalize the first letter of a sentence
        if(isalpha((unsigned char)s[i])){
            if(newSentence == 1){
                s[i] = toupper((unsigned char)s[i]);
                newSentence = 0;
            } else {
                s[i] = tolower((unsigned char)s[i]);
            }
        }
        // Mark the beginning of the next sentence
    if(s[i] == '.' || s[i] == '?' || s[i] == '!'){
        newSentence = 1;
        }
    }

    // Print the converted string
    printf("%s", s);

    return 0;
}
