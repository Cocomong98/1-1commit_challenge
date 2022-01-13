#include <stdio.h>

int main () {

    // Declare variables
    int number;
    int first,second,third;

    // Receive variables
    printf("Input a 3-digit integer: ");
    scanf("%d",&number);
    
    // Relocate variables
    first = number % 10;
    second = number / 10 % 10;
    third = number /100 % 10;

    // Reply output
    printf("%d%d%d\n",first,second,third);

    return 0;
}