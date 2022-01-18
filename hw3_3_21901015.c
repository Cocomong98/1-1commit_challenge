#include <stdio.h>
#include <string.h>

int main() {
// Declare variables
    char input[80]; // The maximum length of a string is 80 (most common)
    int low=0,up=0,space=0,num=0; // Set the initial value to zero
   
// Receive string
    printf("Input a text : ");
    fgets(input,80,stdin); // There's a spacing, so get it as fgets

    int len = strlen(input);
    input[len - 1] = 0; // Minus Enter

// Separate string
    for (int i=0; i<len; i++) {
        if (input[i] >= '0' && input[i] <= '9') num++; // If it's 0 to 9, number
        else if ( input[i] >= 'A' && input[i] <= 'Z') up++; // If it's A~Z, capital letter
        else if ( input[i] >= 'a' && input[i] <= 'z') low++; // If it's a~z, lowercase letter
        else if ( input[i] == ' ') space++; // Word spacing
        // I don't count except for the ones above
    }
// Print answer
    printf("\"%s\" contains %d space, %d uppercase, %d lowercase, and %d digit characters.",input,space,up,low,num);
    return 0;
}