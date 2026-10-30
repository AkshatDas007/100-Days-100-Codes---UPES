// Q 75 : Add Two Matrices

#include <stdio.h>

int main(void){
    int a[10][10], b[10][10], sum[10][10];
    int rows, cols, i, j;

    printf("Enter Number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of the first matrix:\n");
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements of the second matrix:\n");
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            scanf("%d", &b[i][j]);

    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            sum[i][j] = a[i][j] + b[i][j];

    printf("Sum of two matrices: ");
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            printf("%d\t", sum[i][j]);
        printf("\n");

    return 0;
}
