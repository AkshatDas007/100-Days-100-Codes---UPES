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

    // Start with the first element
    int currentSum = arr[0];
    int maxSum = arr[0];

    //Examine the remaining elements
    for(int i = 1; i < n; i++){

        //Either start a new subarray or extend the old one
        if(arr[i] > currentSum + arr[i]){
            currentSum = arr[i];
        } else {
            currentSum = currentSum + arr[i];
        }

        //Update the maximum sum found so far
        if(currentSum > maxSum){
            maxSum = currentSum;
        }
    }

    //Print the maximum subarray sum
    printf("%d\n", maxSum);

    return 0;
}
