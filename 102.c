#include <stdio.h>

int main(){
    int n, x, arr[100];

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &x);

    int low = 0, high = n - 1;
    int answer = -1;

    while(low <= high)
    {
        int mid = low + (high - low) / 2;

        if(arr[mid] >= x)
        {
            answer = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }

    printf("%d\n", answer);

    return 0;
}
