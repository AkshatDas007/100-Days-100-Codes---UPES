
#include <stdio.h>

int main() {
    int n, target;

    // Read array size and target value
    scanf("%d %d", &n, &target);

    int nums[n];

    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Check every pair of distinct indices
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {

            // Check whether the pair adds up to target
            if (nums[i] + nums[j] == target) {
                printf("%d %d\n", i, j);
                return 0;  // Stop after finding the solution
            }
        }
    }

    // Print -1 -1 if no valid pair exists
    printf("-1 -1\n");

    return 0;
}
