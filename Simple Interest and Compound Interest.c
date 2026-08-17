#include <stdio.h>
#include <math.h>

int main(){
    float P, R, T;
    float SI, CI;

    printf("Enter Principal Amount: ");
    scanf("%f", &P);

    printf("Enter Rate: ");
    scanf("%f", &R);

    printf("Enter Time: ");
    scanf("%f", &T);

    SI = P * R * T / 100;
    CI =  P * pow((1 + R / 100), T) - P;

    printf("The Simple interest is: %.2f\n", SI);
    printf("The Compound interest is: %.2f\n", CI);

    return 0;

}
