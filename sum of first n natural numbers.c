#include <stdio.h>

int main(){
    int n,sum;

    // Taking input from user
    printf("Enter Number: ");
    scanf("%d", &n);

    // sum of first n natural numbers
    sum = n * (n + 1) / 2 ;

    printf("Sum is: %d", sum);

    return 0;

}
