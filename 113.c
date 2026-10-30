#include <stdio.h>

int main(){
    int n, k;

    // Read array size and the position k
    scanf("%d %d", &n, &k);

    int arr[n];

    //Read array elements
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    // Sort the array in ascending order using bubble sort

    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - 1 - i; j++){

            // Swap adjacent elements if they are out of order

            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // The kth smallest element is at index k - 1
    printf("%d\n", arr[k - 1]);

    return 0;
}
