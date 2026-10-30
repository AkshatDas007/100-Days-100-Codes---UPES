#include <stdio.h>

int main(){
    int n, k;

    // Read array size and window size
    scanf("%d %d", &n, &k);

    int arr[n];

    // Read array elements
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    // Move the window from left to right
    for(int i = 0; i <= n - k; i++){
        int firstNegative = 0;

        // Search the current window from left to right
        for(int j = i; j < i + k; j++){
            if(arr[j] < 0){
                firstNegative = arr[j];
                break;
            }
        }

        // Print the first negative, or 0 if none exists
        if(i > 0){
            printf(" ");
        }
        printf("%d", firstNegative);
    }

    printf("\n");
    return 0;
}
