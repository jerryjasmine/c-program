/*WRITE A C PROGRAM TO PRINT THE GIVEN PYRAMID(CLICK TO SEE THE PYRAMID).

12345

1234

123

12

1*/
#include<stdio.h>
void main()
{
    int i,j;
    for(i=5;i>0;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
