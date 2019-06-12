//WRITE A C PROGRAM TO READ THE FIRST NAME AND THE LAST NAME OF THE USER IN 2 DIFFERENT VARIABLES,
//COMBINE THEM, AND DISPLAY THEIR FULL NAME USING A SINGLE STRING.
#include<stdio.h>
#include<string.h>
void main()
{
   char f[10],l[10];
   printf("Combining first name and last name......");
   printf("\nEnter first name: ");

   gets(f);
   printf("Enter last name: ");
   gets(l);
   strcat(f,l);
    printf("Full name: %s",f);

}
