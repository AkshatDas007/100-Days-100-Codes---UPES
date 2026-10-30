
#include <stdio.h>

int main() {
    int n, k;

    // Read the size of the array and the window size
    scanf("%d %d", &n, &k);

    int arr[n];

    // Read the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // i represents the starting index of each window
    for (int i = 0; i <= n - k; i++) {

        // Assume the first element of the window is maximum
        int max = arr[i];

        // j checks every remaining element in this window
        for (int j = i + 1; j < i + k; j++) {
            if (arr[j] > max) {
                max = arr[j];
            }
        }

        // Print the maximum of the current window
        if (i > 0) {
            printf(" ");
        }
        printf("%d", max);
    }

    printf("\n");
    return 0;
}
