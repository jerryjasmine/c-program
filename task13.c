/*WRITE A C PROGRAM TO FIND THE SMALLEST AND LARGEST ELEMENT IN AN ARRAY.*/
#include<stdio.h>
void main()
{
    int a[30],n,max,min,i;
    printf("TO FIND THE SMALLEST AND LARGEST ELEMENT IN AN ARRAY......");
    printf("\nEnter the range of array: ");
    scanf("%d",&n);
    printf("Enter the contents of array:\n");
    for(i=0;i<n;i++)
    {
        printf("The value of the a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(i=0;i<n;i++)
    {

    if(a[i]>max)
        max=a[i];

    }
    for(i=0;i<n;i++)
    {

    if(a[i]<min)
        min=a[i];

    }
    printf("Smallest element:%d\nLargest element:%d",min,max);
}
