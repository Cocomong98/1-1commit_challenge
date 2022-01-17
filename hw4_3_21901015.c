#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    // Declaration of variables
    char str1[80] = {0};
    int decimal = 0;
    int i =0; 
    int position = 0;

    // Receive the string and erase the opening text
    printf("Input a binary string: ");
    fgets(str1,80,stdin);
    str1[strlen(str1) - 1] = '\0'; 

   // Converting binary to decimal
    for (i = strlen(str1)-1; i>=0; i--) {
        if (str1[i]-'0' == 1)
            decimal += 1 << position;
        position++;
        //printf("position = %d\n",position);
    }

    printf("\"%s\" = %d (0xf0)",str1,decimal);

    return 0;
}