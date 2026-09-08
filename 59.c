// Q 59: Count even and odd numbers in an array.

#include <stdio.h>

int main(){
    int n;
    printf("Enter Number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
     int evenCount = 0, oddCount = 0;

     for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            evenCount++;
        } else{
            oddCount++;
        }
    }
    printf("Even Numbers count: %d\n", evenCount);
    printf("Odd numbers count: %d\n", oddCount);

    return 0;
}
