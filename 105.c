#include <stdio.h>

int main(){
    int n, nums[1000];

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    int candidate = 0;
    int count = 0;

    // Phase 1: Find a potential majority candidate.
    for(int i = 0; i < n; i++)
    {
        if(count == 0)
        {
            // Start with a new candidate
            candidate = nums[i];
            count = 1;
        }
        else if(nums[i] == candidate)
        {
            // Same element: increase the count.
            count++;
        }
        else{
            // Different element: cancel one occurence.
            count--;
        }
    }

    // Phase 2: verify the candidate actually is a majority.
    int frequency = 0;

    for(int i = 0; i < n; i++)
    {
        if(nums[i] == candidate)
            frequency++;
    }

    if(frequency > n / 2)
        printf("%d\n", candidate);
    else
        printf("-1\n");

    return 0;
}
