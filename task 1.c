#include<stdio.h>

void main()

{

int age;
char n[50];

char pno[10];

printf("Enter the name: ");

gets(n);

printf("Enter age: ");

scanf("%d",&age);

printf("Enter the phone no: ");

scanf("%s",pno);
printf("____________________________________________DISPLAY_____________________________________________________");

printf("\nName:%s\nAge:%d\nPhone no:%s",n,age,pno);

}
