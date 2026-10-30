#include <stdio.h>

//Find the first occurence of target.

int firstOccurence(int nums[], int n, int target)
{
    int low = 0, high = n - 1;
    int answer = -1;

    while(low <= high)
    {
        int mid = low + (high - low) / 2;

        if(nums[mid] == target)
        {
            answer = mid;    // Save this occurrence.
            high = mid - 1;  // Search further left.
        }
        else if(nums[mid] < target)
        {
            low = mid + 1;    // Target must be on the right.
        }
        else
        {
            high = mid - 1;
        }
    }

    return answer;
}

// Find the last occurence of target
int lastOccurence(int nums[], int n, int target)
{
    int low = 0, high = n - 1;
    int answer = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target)
        {
            answer = mid;   // Save this occurence
            low = mid + 1;    // Search further right
        }
        else if(nums[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return answer;
}

int main(){
    int n, target, nums[1000];

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &n);

    scanf("%d", &target);

    printf("%d %d\n", firstOccurence(nums, n, target), lastOccurence(nums, n, target));

    return 0;
}
