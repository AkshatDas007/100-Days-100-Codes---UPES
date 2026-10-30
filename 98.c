//Q98. Print initials with the surname displayed in full
#include <stdio.h>
#include <string.h>

int main(){
    char name[100];
    int i, lastSpace = -1;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    for(i = 0; name[i] != '\0'; i++){
        if(name[i] == ' ')
            lastSpace = i;
        }

        for(i = 0; i < lastSpace; i++){
            if(i == 0 || name[i - 1] == ' ')
                printf("%c.", name[i]);
            }

            printf("%s\n", name + lastSpace + 1);

            return 0;
}
