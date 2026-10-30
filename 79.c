// Q79. Perform diagonal traversal of a matrix
#include <stdio.h>

int main()
{
    int a[10][10], n, i, j;

    printf("Enter the order of matrix: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Diagonal elements are: ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i][i]);
    }

    return 0;
}
