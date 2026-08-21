#include <stdio.h>

int main(void) {
    double a, b, c;

    printf("Enter Side Length of Triangles: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if(a <= 0 || b <= 0 || c <= 0 || a + b <= c || b + c <= a || a + c <= b){
        printf("Invalid Triangle\n");
    } else if(a == b && b == c){
        printf("Equilateral\n");
    } else if(a == b || b == c || a == c){
        printf("Isosceles\n");
        } else{
            printf("Scalene\n");
            }
    return 0;

}
