#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z'){
        printf("%c Is Uppercase Alphabet", ch);
    } else if(ch >= 'a' && ch <= 'z'){
        printf("%c Is Lowecase Alphabet", ch);
    } else if(ch >= '0' && ch <= '9') {
        printf("%c Is A Number", ch);
    } else {
        printf("%c Is Special Character", ch);
    }

    return 0;

}
