#include <stdio.h>
#include <math.h>

int main(){
    float radius, area, circumference;

    printf("Enter Radius: ");
    scanf("%f", &radius);

    area = M_PI * radius * radius;
    circumference = 2 * M_PI * radius;

    printf("The Area is: %.2f\n", area);
    printf("The Circumference is: %.2f\n", circumference);

    return 0;

}
