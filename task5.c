/*WRITE A C PROGRAM TO FIND THE REVERSE OF A GIVEN NUMBER.
Sample Input : 12345

Sample Output : 54321

Hint -> You will have to use loops and the "%" operator, which extracts the last(10's place) number from the given input.*/
#include<stdio.h>
void main()
{
 int n,res=0,d;
 printf("TO FIND THE REVERSE OF A GIVEN NUMBER......");
 printf("\nEnter any number: ");
 scanf("%d",&n);
 int n1;
 n1=n;
 while(n>0)
 {
    d=n%10;
    res=(res*10)+d;
    n=n/10;

 }
 printf("\nThe reverse of a %d number is %d: ",n1,res);
}
