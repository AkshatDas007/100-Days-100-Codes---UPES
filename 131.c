#include <stdio.h>

enum Day{
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main(){
    char *days[] = {"SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY","SATURDAY"};

    for(int i = SUNDAY; i <= SATURDAY; i++){
        printf("%s: %d\n", days[i], i);
    }

    return 0;
}
