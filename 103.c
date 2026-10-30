#include <stdio.h>

int main(){
    int n, arr[1000];
    long long total = 0, leftSum = 0;

    scanf("%d", &n);

    // Read the array and calculate its total sum
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        total += arr[i];
    }

    for(int i = 0; i < n; i++)
    {
        // Right sum excludes the current element.
        long long rightSum = total - leftSum - arr[i];

        if(leftSum == rightSum)
        {
            printf("%d\n", i);
            return 0;    // First valid index is the answer
        }

        // Include the current element in the next left sum
        leftSum += arr[i];

    }

    printf("-1\n");

    return 0;
}
