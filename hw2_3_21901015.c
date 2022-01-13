#include <stdio.h>

int main() {
    // Declare variables
    char number[4];
    int value[4];
    int result;

    // Receive variables
    printf("Input a 4-digit binary number: ");
    scanf("%s",number);

    // Converting to hexadecimal
    value[0] = (number[0] - '0') * 8;
    value[1] = (number[1] - '0') * 4;
    value[2] = (number[2] - '0') * 2;
    value[3] = (number[3] - '0') * 1;
    result = value[0]+value[1]+value[2]+value[3];

    // Reply output
    printf("%s = %d (0x%x)\n",number,result,result);

    return 0;
}