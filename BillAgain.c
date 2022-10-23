

//Restaurant Bill

#include <stdio.h>

int main()
{
int CustomerChoice;
float tax,tip,total;

printf("\nHi! Welcome in folks!\n");
printf("Please select one of the following items\n");
printf("\n");
printf("\nMENU\n");

printf("1. Salad: $9.95\n");
printf("2. Soup: $4.55\n");
printf("3. Sandwich: $13.25\n");
printf("4. Pizza: $22.35\n");

printf("\nPlease select one of the items (1-4): ");

fflush(stdout); //FLUSH STATEMENT

scanf("%d", &CustomerChoice);

/* TEST POINT
printf("\nYou chose: %d\n", CustomerChoice); 
*/

printf("Sounds good! Let me ring that up\n");
printf("\nEnter tax percentage: ");

fflush(stdout); //FLUSH STATEMENT

scanf("%f", &tax);

printf("\nEnter tip percentage: ");

fflush(stdout); //FLUSH STATEMENT
scanf("%f", &tip);

switch(CustomerChoice)
{
    case 1: //salad
    printf("\nHere's your bill: \n");
    printf("Meal Price: $9.95\n");
    printf("Tax: $%.2f\n", (tax/100)*9.95);
    printf("Tip: $%.2f\n", (tip/100)*9.95);
    
    total=9.95+((tax/100)*9.95)+((tip/100)*9.95);
    printf("Total: $%.2f", total);

    case 2: //soup
    printf("\nHere's your bill: \n");
    printf("Meal Price: $4.55\n");
    printf("Tax: $%.2f\n", (tax/100)*4.55);
    printf("Tip: $%.2f\n", (tip/100)*4.55);
    
    total=4.55+((tax/100)*4.55)+((tip/100)*4.55);
    printf("Total: $%.2f", total);

    case 3: //sandwich
    printf("\nHere's your bill: \n");
    printf("Meal Price: $13.25\n");
    printf("Tax: $%.2f\n", (tax/100)*13.25);
    printf("Tip: $%.2f\n", (tip/100)*13.25);
    
    total=13.25+((tax/100)*13.25)+((tip/100)*13.25);
    printf("Total: $%.2f", total);

     case 4: //pizza
    printf("\nHere's your bill: \n");
    printf("Meal Price: $22.35\n");
    printf("Tax: $%.2f\n", (tax/100)*22.35);
    printf("Tip: $%.2f\n", (tip/100)*22.35);
    
    total=22.35+((tax/100)*9.95)+((tip/100)*9.95);
    printf("Total: $%.2f", total);



}


    
    return 0;
}