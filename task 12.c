/*WRITE A C PROGRAM TO DISPLAY THE FOLLOWING OPTIONS : 1. CELCIUS TO FAHRENHEIT,
 2. FAHRENHEIT TO CELCIUS, 3. EXIT. PERFORM THE RELEVANT OPERATION USING SWITCH CASE.
*/
#include<stdio.h>
void main()
{
    float c,f;int ch;
    printf("Enter: \n1. CELCIUS TO FAHRENHEIT\n2. FAHRENHEIT TO CELCIUS\n3. EXIT.\n");
    scanf(" %d",&ch);
    switch(ch)
    {
         case 1:printf("\nEnter temerature in the celcius: ");
         scanf("%f",&c);
         f=(c*(9/5.0))+32;
         printf("Fahrenheit: %f",f);
         break;
         case 2:
    printf("\nEnter temerature in the Fahrenheit: ");
         scanf("%f",&f);
        c= 5 * (f - 32)/9;
         printf("Celcius: %f",c);
         break;
         case 3:printf("\nExit..........");
         break;
         default: printf("Wrong choice.....");
         }
}
