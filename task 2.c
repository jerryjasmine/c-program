/*WRITE A C PROGRAM TO TAKE THE TEMPERATURE IN CELSIUS AND CONVERT IT TO FAHRENHEIT AND DISPLAY IT BACK.

*Tip -> Use this formula -> Celsius = 5 * (Fahrenheit - 32)/9

PS -> Use the 'FLOAT' data type*/
#include<stdio.h>
void main()
{
float c,f;
printf("Converting the Temperature in celcius to fahrenheit..........\n");
printf("Enter the Temperature in celcius: ");
scanf("%f",&c);
f=(c*(9/5.0))+32;
printf("\nThe Temperature in fahrenheit: %f",f);
}
