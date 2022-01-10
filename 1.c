/*
1. () has highest precedence
2. Unary > binary
3. postfix > prefix
4. multiplicative > additive
5. inequality > quality
6. logical AND (&&) > OR (||)
7. assignment operators have very low precedence
*/

/*
    Write a program average4.c that reads 4 integers and prints their average and variation.
    Ex) average4.exe
        input 4 numbers: 100 125 150 175
        average = 137.500000, variance = 781.250000
*/

// incorrect version

#include <stdio.h>

void swap(int x, int y);

int main()
{
    int a = 0, b = 0;

    // read two numbers
    printf("Input two numbers: ");
    scanf("%d %d", &a, &b);

    printf("a = %d, b = %d\n", a, b);

    // exchange a and b
    swap(a, b);
/*    
    int temp = a;
    a = b;
    b = temp;
*/    

    // print the result
    printf("a = %d, b = %d\n", a, b);

    return 0;
}

void swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;

    printf("x = %d, y = %d\n", x, y);
}