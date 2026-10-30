
#include <stdio.h>

int main() {
    int n;

    // Take the size of the array
    scanf("%d", &n);

    int arr[n];

    // Take array elements as input
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find the previous greater element for each element
    for (int i = 0; i < n; i++) {
        int previousGreater = -1;  // Assume none exists

        // Search elements to the left of arr[i]
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                previousGreater = arr[j];
                break;  // Nearest greater element found
            }
        }

        // Print the answer for this element
        if (i > 0) {
            printf(", ");
        }
        printf("%d", previousGreater);
    }

    printf("\n");
    return 0;
}
