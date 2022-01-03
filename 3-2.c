#include <stdio.h>

int main() {

    int x=0; 
    int ones,thousand,millions=0;

    printf("Input a 9-digit number : ");
    scanf("%d",&x);

    ones = x % 1000;
    thousand = x /1000 % 1000;
    millions = x / 1000000 % 1000;

    printf("Your number is %03d, %03d, %03d\n",millions,thousand,ones); 

    return 0;
}