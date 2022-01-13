#include <stdio.h>

int main() {
// Declare variables
    int number=0;

// Receive numbers
    printf("Input a number between 1 and 9 : ");
    scanf("%d",&number);

// Print out multiplication tables corresponding to the number
    for (int i=1; i<=9; i++) {
        printf("%d * %d = %d\n",number,i,number*i); // Multiply by 1 to 9
    }

    return 0;
}