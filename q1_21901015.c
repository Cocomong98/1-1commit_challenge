#include <stdio.h>

void divide (int dividend, int divisor, int* quotient, int* remainder);

int main() {
    int num1 = 0, num2 = 0;
    int quo = 0, rem = 0;

    printf(“Input two numbers: ”);
    scanf(“%d %d”, &num1, &num2);
    divide(num1, num2, &quo, &rem);
    printf(“%d / %d = %d\n”, num1, num2, quo); 
    printf(“%d %% %d = %d\n”, num1, num2, rem);
return;
}

void divide (int dividend, int divisor, int* quotient, int* remainder) {
    *quotient = dividend / divisor; *remainder = dividend % divisor; return;
}