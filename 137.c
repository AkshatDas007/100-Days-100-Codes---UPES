#include <stdio.h>

//Define enumeration for roles

enum ROLE{
    ADMIN,
    USER,
    GUEST
};

int main(){
    enum ROLE userRole;

    //Take input from user
    printf("Enter Your User Role: \n");
    printf("0. ADMIN\n");
    printf("1. USER\n");
    printf("2. GUEST\n");

    printf("Enter your choice: ");
    scanf("%d", &userRole);

    switch(userRole){
        case ADMIN:
            printf("Welcome Admin! You have full access.\n");
            break;

        case USER:
            printf("Welcome User! You have standard access.\n");
            break;

        case GUEST:
            printf("Welcome Guest! You have limited access");
            break;

        default:
            printf("Invalid Role!\n");
    }
    return 0;
}
