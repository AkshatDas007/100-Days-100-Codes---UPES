// Q 62: Reverse an array without taking extra space.

#include <stdio.h>

void reverse_array(int arr[], int n){
    int start = 0, end = n - 1;
    while(start < end){

        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

void input_array(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void display_array(int arr[], int n) {
    for(int i = 0; i < n; i++){
        printf("%d", arr[i]);
    }
    printf("\n");
}

int main(){
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    input_array(arr, n);

    printf("Original array: ");
    display_array(arr, n);

    reverse_array(arr, n);

    printf("Reverse array: ");
    display_array(arr, n);

    return 0;
}
