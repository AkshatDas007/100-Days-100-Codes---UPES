
#include <stdio.h>

int main() {
    int n;

    // Take the size of the array
    scanf("%d", &n);

    int arr[n];
    int answer[n];

    // Read the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 1: Store the product of elements to the left
    // of each position
    int prefix = 1;

    for (int i = 0; i < n; i++) {
        answer[i] = prefix;
        prefix = prefix * arr[i];
    }

    // Step 2: Multiply by the product of elements to the right
    int suffix = 1;

    for (int i = n - 1; i >= 0; i--) {
        answer[i] = answer[i] * suffix;
        suffix = suffix * arr[i];
    }

    // Print the final answer array
    for (int i = 0; i < n; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%d", answer[i]);
    }

    printf("\n");
    return 0;
}
