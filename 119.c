#include <stdio.h>

int main(){
    int n;

    // Read the array size
    scanf("%d", &n);

    int arr[n];

    // Read the array elements
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int repeated  = 0;

    // XOR all elements together
    for(int i = 0; i < n; i++){
        repeated = repeated ^ arr[i];
    }

    // If every other element appears exactly once
    // XOR cancels those elements in pairs
    printf("%d\n", repeated);

    return 0;
}
