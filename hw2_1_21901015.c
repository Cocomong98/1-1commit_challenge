#include <stdio.h>

int main() {
   // Declare variables
   char name[80];
   float price,quantity,charge;

   // Receive variables
    printf("Item name : ");
    scanf(" %s",name);

    printf("Unit price : ");
    scanf("%f",&price);

    printf("Quantity : ");
    scanf("%f",&quantity);

    printf("Shipping charge : ");
    scanf("%f",&charge);

    // Print out the total amount 
    printf("%s : $%.2f * %f +$%.2f = %.2f\n",name,price,quantity,charge,price*quantity+charge);
    
    return 0;
}