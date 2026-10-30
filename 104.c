#include <stdio.h>
#include <math.h>

int main(){
    long long n;
    scanf("%lld", &n);

    // The Sum from 1 to x equals x(x + 1) / 2.
    // The sum from x to n equals n(n + 1) /  2 - x(x - 1) / 2.
    // Equating these expressions gives x*x = n(n + 1) / 2.

    long long value = n * (n + 1) /  2;

    // Find the square root of value.

    long long x = (long long)sqrt((long double)value);

    // Verify the answer to avoid floating-point rounding errors.
    if(x * x == value)
        printf("%lld\n", x);
    else
        printf("-1\n");

    return 0;
}
