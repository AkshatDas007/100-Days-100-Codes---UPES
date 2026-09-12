#include <stdio.h>

void insertSorted(int arr[], int *n, int key) {
    int i;

    for(i = *n - 1; (i >= 0 && arr[i] > key); i--){
        arr[i + 1] = arr[i];
    }

    arr[i + 1] = key;
    (*n)++;
}

int main(){
    int n, key;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n + 1];

    printf("Enter %d sorted elements: ", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to insert: ");
    scanf("%d", &key);

    insertSorted(arr, &n, key);

    printf("Array after insertion: ");
    for(int i = 0; i < n; i++)
        printf("%d", arr[i]);
    printf("\n");

    return 0;
}
