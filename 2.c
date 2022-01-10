#include <stdio.h>

int main()
{
    int x = 0;
    int ones = 0;
    int thousands = 0;
    int millions = 0;

    // read a 9-digit number
    printf("Input a 9-digit integer: ");
    scanf("%d", &x);

    // retrieve ones, thousands, and millions
    ones = x % 1000;
    thousands = x / 1000 % 1000;
    millions = x / 1000000 % 1000;

    // print with comma
    printf("Your number is %03d,%03d,%03d\n", millions, thousands, ones);

    return 0;
}