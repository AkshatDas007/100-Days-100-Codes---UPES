// Q97. Print initials of a name
#include <stdio.h>
#include <string.h>

int main(){
    char name[100];
    int i;

    printf("Enter Your Full Name: ");
    fgets(name, sizeof(name), stdin);

    printf("%c", name[0]);


    for(i = 0; name[i] != '\0'; i++)
    {
        if(name[i] == ' ' && name[i + 1] != '\0' && name[i + 1] != '\n'){
            printf(".%c", name[i + 1]);
        }
    }

    printf(".\n");

    return 0;
}
