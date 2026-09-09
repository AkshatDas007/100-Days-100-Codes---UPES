// Q 61: Search for an element in an array using linear search.

#include <stdio.h>

void input_array(int arr[], int n) {
    for (int i = 0; i < n; i++){
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

int linear_search(int arr[], int n, int target){
    for(int i = 0; i < n; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

void display_result(int result, int target){
    if(result != -1){
        printf("Element %d found at index %d\n", target, result);
    } else {
        printf("Element %d not found in the array", target, result);
    }
}

int main() {
    int n, target;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    input_array (arr, n);

    printf("Enter element to search: ");
    scanf("%d", &target);

    int result = linear_search(arr, n, target);

    display_result(result, target);

    return 0;
}
