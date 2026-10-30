#include <stdio.h>

int main(void)
{
    int a[10][10], transpose[10][10];
    int rows, cols, i, j, isSymmetric = 1;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    if (rows != cols) {
        printf("Not symmetric (must be a square matrix)\n");
        return 0;
    }

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            transpose[j][i] = a[i][j];

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (a[i][j] != transpose[i][j]) {
                isSymmetric = 0;
                break;
            }
        }
        if (!isSymmetric)
            break;
    }

    if (isSymmetric)
        printf("The matrix is symmetric.\n");
    else
        printf("The matrix is not symmetric.\n");

    return 0;
}
