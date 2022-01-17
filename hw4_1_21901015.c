#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


int main() {
    // Declaration of variables
    char str[80]={0};
    char str1[80]={0}, str2[80]={0}, str3[80]={0}, str4[80]={0};
    int num1=0,num2=0,sum =0;
    int i =0,j=0,k=0;

    // Receive the string and erase the opening text
    printf("Input a text line : ");
    fgets(str,80,stdin);
    str[strlen(str) - 1] = '\0';

    // Check odd and even numbers and save them
    for (i=0; i<strlen(str); i++) {
        if (isdigit(str[i])!=0) {

            if (str[i]%2 == 0) {
                str1[j]=str[i];
                j++;
            }
            else if (str[i]%2!=0) {
                str2[k]=str[i];
                k++;
            }
        }
    }
    // If the string is empty, it's not there
    if(j==0) printf("no even digit.");
    else printf("Even Digits : "); 
    
    for (i=0; i<j; i++) {
        //if (strlen(str1)==0) {printf("no even digit."); break;}
        //else 
        printf("%c",str1[i]);
    }
    printf("\n");
    printf("Odd Digits : ");
    for (i=0; i<k; i++) {
        //If the string is empty, it's not there
        if (strlen(str2)==0) {printf("no odd digit."); break;}
        else printf("%c",str2[i]);
    }
    printf("\n");

    // Save as the number of strings you received
    num1=atoi(str1);
    num2=atoi(str2);
    // Adding numbers to each other
    sum=num1+num2;

    //Print out the answers
    printf("\"%s\" and \"%s\" are converted into %d and %d, respectively. Their sum is %d.",str1,str2,num1,num2,sum);

    return 0;
}