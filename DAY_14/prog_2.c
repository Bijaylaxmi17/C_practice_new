//WAP in C to find smallest element in an array.

#include<stdio.h>
#define MAX_SIZE 100
void main()
{
    int a[MAX_SIZE];
    int i,size,smallest;
    printf("Enter the size of the array :");
    scanf("%d",&size);
    printf("Enter the elements of array : \n");
    for ( i = 0; i < size; i++)
    {
        printf("Element - %d :",i);
        scanf("%d",&a[i]);
    }
    printf("\nElements of array are : ");
    for ( i = 0; i < size; i++)
    {
        printf("%d ",a[i]);
    }
    smallest=a[0];
    for ( i = 0; i < size; i++)
    {
       if (a[i]<smallest)
       {
           smallest=a[i];
       }
       
    }
    printf("\n The smallest element of the above array is : %d",smallest);
    
}