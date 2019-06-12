/*WRITE A C PROGRAM TO READ AN INTEGER AND PRINT ITS MULTIPLICATION TABLE.

Sample Input : 5

Sample Output :

5 * 1 = 5

5 * 2 = 10

5 * 3 = 15

...

...

5 * 10 = 50*/
#include<stdio.h>
void main()
{
    int n,i,res;
    printf("TO READ AN INTEGER AND PRINT ITS MULTIPLICATION TABLE.....");
    printf("\nEnter a any number: ");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        res=n*i;
        printf("%d * %d = %d\n",n,i,res);
    }
}
