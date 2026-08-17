#include <stdio.h>
#include <math.h>

int main(){
    float celsius, fahrenheit;

    printf("Enter Temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = 9 / 5 * celsius + 32;

    printf("The Temperature in fahrenheit is: %.2f\n", fahrenheit);

    return 0;

}
