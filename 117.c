#include <stdio.h>

int main(){
    int m, n;

    // Read the sizes of both arrays
    scanf("%d %d", &m, &n);

    int a[m], b[n], merged[m + n];

    // Input the first sorted array
    for(int i = 0; i < m; i++){
        scanf("%d", &a[i]);
    }

    // Input the second sorted array
    for(int i = 0; i < n; i++){
        scanf("%d", &b[i]);
    }

    int i = 0, j = 0, k = 0;

    // Compare elements from both arrays
    while(i < m && j < n){
        if(a[i] <= b[j]){
            merged[k] = a[i];
            i++;
        }else{
            merged[k] = b[j];
            j++;
        }
        k++;
    }

    // Copy any remaining elements from the first array
    while(i < m){
        merged[k] = a[i];
        i++;
        k++;
    }

    // Copy any remaining elements from the second array
    while(i < m){
        merged[k] = b[j];
        j++;
        k++;
    }

    // Print the merged sorted array
    for(int p = 0; p < m + n; p++){
        if(p > 0){
            printf(" ");
        }
        printf("%d", merged[p]);
    }

    printf("\n");
    return 0;

    }
