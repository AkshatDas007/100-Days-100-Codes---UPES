//Q109 — Maximum Sum Subarray of Size K
#include <stdio.h>

int main() {
    int n, k;

    // Read the array size and window size
    scanf("%d %d", &n, &k);

    int arr[n];

    // Read the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate the sum of the first window of size k
    int windowSum = 0;

    for (int i = 0; i < k; i++) {
        windowSum = windowSum + arr[i];
    }

    // Initially, the first window has the maximum sum
    int maxSum = windowSum;

    // Move the window one position to the right each time
    for (int i = k; i < n; i++) {
        // Remove the element that leaves the window
        windowSum = windowSum - arr[i - k];

        // Add the new element entering the window
        windowSum = windowSum + arr[i];

        // Update the maximum sum if necessary
        if (windowSum > maxSum) {
            maxSum = windowSum;
        }
    }

    // Print the maximum sum
    printf("%d\n", maxSum);

    return 0;
}
