#include <stdio.h>

int main(){
    int n;

    // Read the array size
    scanf("%d", &n);

    int arr[n];

    // Read the array element
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    // Calculate the expected sum of numbers from 0 to n
    int expectedSum = n * (n + 1) / 2;

    // Calculate the actual sum of array elements
    int actualSum = 0;

    for(int i = 0; i < n; i++){
        actualSum = actualSum + arr[i];
    }

    // The difference gives the missing number
    int missing = expectedSum - actualSum;

    printf("%d\n", missing);

    return 0;
}
