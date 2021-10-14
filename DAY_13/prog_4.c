//WAP in C to find sum of all elements of the array.

#include<stdio.h>
void main()
{
    int a[100];
    int i,n,sum=0;
    printf("Enter the number of elements to store in array :");
    scanf("%d",&n);
    printf("Enter the elements of array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("Sum of all elements stored in the array is : %d",sum);
}