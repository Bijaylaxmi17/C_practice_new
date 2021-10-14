//WAP in C to copy the elements of one array into another array.

#include<stdio.h>
void main()
{
    int a[100],b[100];
    int i,n;
    printf("Enter the number of elements to be stored in the array : ");
    scanf("%d",&n);
    printf("Enter the elements of array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
      b[i]=a[i];
    }
    for(i=0;i<n;i++)
    {
      printf("%d",a[i]);
    }
    printf("The elements copied into the second array are :");
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
    
}