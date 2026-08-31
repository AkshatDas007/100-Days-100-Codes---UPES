#include <stdio.h>

int main(){
    int num, rem, binary = 0, place = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0){
        rem = num % 2;
        binary = binary * rem + place;
        place = place * 100;
        num = num / 2;
        }

    printf("Binary Representation of Number is: %d", binary);
    return 0;
}
