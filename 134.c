#include <stdio.h>

// Declare an enumeration
enum Status
{
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main(){
    enum Status result;

    // Assign a value
    result = TIMEOUT;

    // Check the status and print message
    if(result == SUCCESS){
        printf("Operation Completed Successfully.");
    }else if(result == FAILURE){
        printf("Operation Failed.");
    }else{
        printf("Operation Timed Out.");
    }
    return 0;
}
