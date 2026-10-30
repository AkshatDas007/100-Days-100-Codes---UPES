#include <stdio.h>

int main(){
    char ch[100];

    printf("Enter a string: ");
    fgets(ch, sizeof(ch), stdin);

    for(int i = 0; ch[i] != '\0' && ch[i] != '\n'; i++){
        printf("%c\n", ch[i]);
    }

    return 0;
}
