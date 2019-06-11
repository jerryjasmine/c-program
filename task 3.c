//WRITE A C PROGRAM TO TAKE MARKS IN 3 SUBJECTS AND DISPLAY THEIR SUM AND AVERAGE.
#include<stdio.h>
void main()
{
 int m1,m2,m3,s;float a;
 printf("Calculating total of 3 subjects and average.....");
 printf("\nEnter the 3 marks:\n1 st mark: ");
 scanf("%d",&m1);
 printf("2 nd mark: ");
 scanf("%d",&m2);
 printf("3 rd mark: ");
 scanf("%d",&m3);
 s=m1+m2+m3;
 printf("\nTotal: %d",s);
 a=s/3.0;
 printf("\nAverage: %f",a);
}






