/*WRITE A C PROGRAM TO FIND FACTORIAL OF A NUMBER.

Sample Input : 6

Sample Output : 720

Hint -> The factorial is calculated as follows :

6! = 6*5*4*3*2*1 = 720*/
#include<stdio.h>
void main()
{

int n,i,f=1;
printf("TO FIND FACTORIAL OF A NUMBER.....");
printf("\nEnter any number: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    f=f*i;
}
printf("The factorial of %d number is %d",n,f);

}
