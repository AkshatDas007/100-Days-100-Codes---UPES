/* Q52 Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*
*/
#include <stdio.h>

int main(){
    int i, j;

    // Groups with 1, 3 and 5 stars
    for(i = 1; i <= 5; i += 2){
        for(j = 1; j <= i; j++){
            printf("*\n");
        }
        printf("\n");  // blank line after a group
    }

    // Groups with 3 and 1 stars
    for(i = 3; i >= 1; i -= 2){
        for(j = 1; j <= i; j++){
            printf("*\n");
        }
        printf("\n");
    }

    if( i != 1){
            printf("\n"); // no extra blank line after the final star
    }
    return 0;
}
