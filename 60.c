#include <stdio.h>

int main(){
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int posCount = 0, negCount = 0, zeroCount = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] > 0)
            posCount++;
        else if(arr[i] < 0)
            negCount++;
        else
            zeroCount++;
        }

        printf("Positive Count: %d\n", posCount);
        printf("Negative Count: %d\n", negCount);
        printf("Zero Count: %d\n", zeroCount);

        return 0;
}
