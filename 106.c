#include <stdio.h>

int main(){
    int n;

    //Take the size of the array.
    scanf("%d", &n);

    int arr[n];

    //Take array elements as input
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    //Find the next greater element for each element
    for(int i = 0; i < n; i++){
        int nextGreater = -1; // Assume none exists

        // Search elements to the right of arr[i]
        for(int j = i + 1; j < n; j++){
            if(arr[j] > arr[i]){
                nextGreater = arr[j];
                break;    // First greater element found
            }
        }

        //Print the answer for this element
        if(i > 0){
            printf(", ");
        }
        printf("%d", nextGreater);
    }

    printf("\n");
    return 0;
}
