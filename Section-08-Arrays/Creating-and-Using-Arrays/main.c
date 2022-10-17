#include <stdio.h>
#include <stdlib.h>

int main() {

    int grades[10];     // array stores 10 values
    int count = 10;     // number of values to be read
    long sum = 0;       // sum of the numbers
    float average;      // average of the numbers

    printf("Enter the 10 grades: \n");  // prompt for the input

    // read the ten numbers to be averaged
    for (int i = 0; i < count; ++i) {
        printf("%2u> ", i + 1);
        scanf("%d", &grades[i]);    // read a grade
        sum += grades[i];
    }

    average = (float)sum / (float)count;    // calculate average
    printf("\nAverage of the ten grades is: %.2f\n", average);

    return 0;
}
