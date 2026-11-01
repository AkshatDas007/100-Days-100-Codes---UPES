#include <stdio.h>

// Function to read numbers and calculate sum and count

void readNumbers(int *sum, int *count){
    FILE *fp;
    int num;

    // Open the file
    fp = fopen("numbers.txt", "r");

    if(fp == NULL){
        printf("File cannot be opened");
        return;
    }

    // Read integers until EOF
    while(fscanf(fp, "%d", &num) == 1){
        *sum = *sum + num;
        (*count)++;
    }

    fclose(fp);
}

// Function to calculate average
float AVG(int sum, int count){
    return (float)sum / count;
}

// Main function
int main(){
    int sum = 0, count = 0;
    float average;

    // Call function to read numbers
    readNumbers(&sum, &count);

    if(count == 0){
        printf("No integers in file\n");
    }else{
        // Call function to calculate average
        average = AVG(sum, count);

        printf("Sum = %d\n", sum);
        printf("Average = %.2f\n", average);


    }
    return 0;
}
