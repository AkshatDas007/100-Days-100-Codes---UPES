
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];

    // Read the input string
    fgets(s, sizeof(s), stdin);

    // Remove the newline added by fgets, if present
    s[strcspn(s, "\n")] = '\0';

    int n = strlen(s);

    // Store the most recent index of each character
    int lastSeen[256];

    for (int i = 0; i < 256; i++) {
        lastSeen[i] = -1;
    }

    int left = 0;       // Starting index of the window
    int maxLength = 0;  // Longest valid substring length

    // Expand the window by moving right
    for (int right = 0; right < n; right++) {
        unsigned char ch = (unsigned char)s[right];

        // If this character repeats inside the window,
        // move the left boundary past its previous occurrence
        if (lastSeen[ch] >= left) {
            left = lastSeen[ch] + 1;
        }

        // Record the current occurrence
        lastSeen[ch] = right;

        // Calculate the length of the current window
        int length = right - left + 1;

        // Update the maximum length
        if (length > maxLength) {
            maxLength = length;
        }
    }

    printf("%d\n", maxLength);

    return 0;
}
