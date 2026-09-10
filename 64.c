#include <stdio.h>
#include <stdlib.h> //for abs()

int main() {
    long long num;
    int count[10] = {0};

    printf("Enter an integer number: ");
    scanf("%lld", &num);

    long long n = llabs(num);

    if (n == 0){
        count[0] = 1;
    }

    while(n > 0){
        int digit = n % 10;
        count[digit]++;
        n /= 10;
    }

    int maxDigit = 0, maxCount = count[0];
    for(int i = 1; i <= 9; i++){
        if(count[i] > maxCount){
            maxCount = count[i];
            maxDigit = i;
        }
    }

    printf("The digit that occurs the most is %d (appears %d times)\n", maxDigit, maxCount);
    return 0;
}
