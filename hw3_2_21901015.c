#include <stdio.h>

int main() {
// Declare variables
    int number[10]=0, positive_number[10]=0;
    int count=0,sum=0;
    float avg=0F;
// Receive numbers and separate positive cases
    printf("Input 10 integers : ");
    for (int i=0; i<10; i++) { // Receive 10 times
        scanf("%d",&number[i]);
        if (number[i]>0) {
            positive_number[count] = number[i]; // If it's greater than 0, check it as a positive number
            count++; // Accumulate the count
        }
    }
// Calculate the sum and average using the positive numbers
    for(int i=0; i<count; i++) {
        sum += positive_number[i]; // Total is the sum of all numbers
    }
    avg = sum*1.0/count*1.0; // The average is the sum divided by the number
// Print answer
    printf("%d positive numbers. sum = %d, avg = %.6f\n",count,sum,avg);
    printf("Positive numbers : ");
    for (int i=0; i<count; i++) {
        printf(" %d",positive_number[i]);
    }
    printf("\n");
    
    return 0;
}