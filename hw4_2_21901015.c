#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    // Declaration of variables
    char str1[80] = {0};
    char str2 = '0';
    char str3 = '0';
    char shutdown[80] = "\n";
    int i=0,count=0;
    int stop=0;

    while (1) {
        // Receive the string and erase the opening text
        printf("Input a text line: ");
        fgets(str1,80,stdin);
        stop = strcmp(str1,shutdown);
        if (stop==0) break;
        str1[strlen(str1) - 1] = '\0'; 
        
        
        //else { 
            printf("Character to find: "); 
            scanf("%c",&str2);
            //Lowercase in uppercase and lowercase letters
            if (str2>='A' && str2<='Z') {
                str3 = str2+32;
            }
            else if (str2>='a' && str2 <='z') {
                str3 = str2-32;
            }
            //If it matches the case, add a count
            for (i=0; i<strlen(str1); i++) {
                if (str1[i]==str2 || str1[i]==str3) count++;
            }
            //Print out the answers
            printf("\"%s\" contains %d '%c’ characters.\n",str1,count,str2);
        //}
    }
}