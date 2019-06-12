/*WRITE A C PROGRAM TO CHECK IF THE GIVEN NUMBER IS AN ARMSTRONG NUMBER OR NOT.

Hint -> An Armstrong number of 'n' digits is the sum of all the individual digits to their powers of 'n'.

For example, 371 is an Armstrong number because

371 = 3**3 + 7**3 + 1**3 (where ** represents "to the power of")

, which is the sum of individual numbers to the power 'n'! Here, 'n'is 3, since the number is 371!*/
#include<stdio.h>
#include<math.h>
void main()
{
    int n,d,res=0,c=0,d1;
    printf("TO CHECK IF THE GIVEN NUMBER IS AN ARMSTRONG NUMBER OR NOT......");
     printf("\nEnter any number: ");
 scanf("%d",&n);
 int n1,n2;
 n1=n;
 n2=n;
 while(n>0)
 {
    d=n%10;
    c++;
    n=n/10;

 }
 while(n1>0)
 {
    d1=n1%10;
    res=res+(pow(d1,c));
    n1=n1/10;
 }
 if(res==n2)
    printf("The %d number is an amstrong number",n2);

else
     printf("The %d number is not an amstrong number",n2);
}

