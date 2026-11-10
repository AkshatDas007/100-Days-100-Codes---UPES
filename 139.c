#include <stdio.h>

// Declare an enumeration with assigned integer values

enum Numbers {
    ONE = 10,
    TWO = 20,
    THREE = 30,
    FOUR = 40,
};

int main(){
    //Print enum values as integers
    printf("ONE = %d\n", ONE);
    printf("TWO = %d\n", TWO);
    printf("THREE = %d\n", THREE);
    printf("FOUR = %d\n", FOUR);

    return 0;
}
