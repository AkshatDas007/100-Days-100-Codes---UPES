#include <stdio.h>

//Declare enum

enum Operation
{
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main(){
    int choice, a, b;

    // Display menu
    printf("Menu\n");
    printf("1. ADD\n");
    printf("2. SUBTRACT\n");
    printf("3. MULTIPLY\n");

    //take user input
    printf("Enter Your Choice: ");
    scanf("%d", &choice);

    // User input for number
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch(choice){
        case ADD:
            printf("Sum = %d\n", a + b);
            break;

        case SUBTRACT:
            printf("Difference = %d\n", a - b);
            break;

        case MULTIPLY:
            printf("Product = %d\n", a * b);
            break;

        default:
            printf("Invalid Choice.");
        }

        return 0;
    }
