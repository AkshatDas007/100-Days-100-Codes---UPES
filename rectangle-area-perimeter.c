#include <stdio.h>

int main() {
    int length, breadth;

    int area;
    int perimeter;

    printf("Enter Length: ");
    scanf("%d", &length);

    printf("Enter Breadth: ");
    scanf("%d", &breadth);

    area = length * breadth;
    printf("The Area is:%d\n", area);

    perimeter = 2 * (length + breadth);
    printf("The Perimeter is:%d\n ", perimeter);

    return 0;
}
