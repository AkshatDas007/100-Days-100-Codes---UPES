#include <stdio.h>

int main(){
    char str[100];
    int vowelCount = 0, conCount = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            vowelCount++;
        } else{
            conCount++;
        }
    }
    printf("No Of Vowels: %d\n", vowelCount);
    printf("No of Consonants: %d\n", conCount);

    return 0;
}
