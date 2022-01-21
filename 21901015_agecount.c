/*
Q. Enter the total number of family members, receive the number of years of birth, and print out the number of minors
*/

#include <stdio.h>

int main() {

    int people=0, age=0, young=0, birth_year=0; // Declaration and initialization of necessary variables
    

    // Output a question to be used in a repetition statement and enter an answer
    printf("Input family amount : "); 
    scanf("%d",&people); 

    // Implementation of repeated sentences to determine whether a minor is a minor or not after questioning the number of family members
    for(int i=0; i<people; i++) { // Repeating the number of family members input by the user
        printf("Birth year? : "); // Birth year question
        scanf("%d",&birth_year); // Enter your birth year
        age = 2021-birth_year+1; // Use your birth year to calculate age
        if (age<20) young++; // If under 20, add a minor count
    }

    printf("Amount of young is %d\n",young); // Use the underage count to print out the answer


    return 0;
}