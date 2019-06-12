/*WRITE A C PROGRAM TO CHECK IF THE GIVEN STRING IS A PALINDROME OR NOT.

Hint -> The given string is a palindrome when it's reverse is the same as the original string.
For example, the string "mom", "dad", "deed" etc. are all Palindromes.*/
#include<stdio.h>
#include<string.h>
void main()
{
    char s[10],s1[10];
    printf("TO CHECK IF THE GIVEN STRING IS A PALINDROME OR NOT....");
    printf("\nEnter any string: ");
    gets(s);
    strcpy(s1,s);
    strrev(s);
    if(strcmp(s1,s)==0)
        printf("The given string is a palindrome");
    else
        printf("The given string is not a palindrome");


}
