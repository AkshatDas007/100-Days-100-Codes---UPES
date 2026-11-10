#include <stdio.h>

enum TrafficLight {
    RED = 0,
    YELLOW = 1,
    GREEN = 2
};

int main(){
    int input;
    enum TrafficLight light;

    printf("Enter traffic light( 0 for RED, 1 for YELLOW, 2 for GREEN): ");
    if(scanf("%d", &input) == 1){
       light = (enum TrafficLight)input;

    switch(light){
        case RED:
            printf("STOP!\n");
            break;
        case YELLOW:
            printf("WAIT\n");
            break;
        case GREEN:
            printf("GO!\n");
            break;
        default:
            printf("Invalid Signal\n");
        }
    } else{
        printf("Invalid Signal Value!\n");
    }

    return 0;
}
