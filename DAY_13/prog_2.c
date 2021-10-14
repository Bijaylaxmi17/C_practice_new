//WAP in C to store elements in an array and print it.

#include<stdio.h>
#define MAX_SIZE 100
void main()
{
    int a[MAX_SIZE];
    int size,i;
    printf("Enter the size of array :");
    scanf("%d",&size);
    printf("Enter the elements of array :");
    for ( i = 0; i < size; i++)
    {
        printf("Element - %d:",i);
        scanf("%d",&a[i]);
    }
    printf("Elements of array are : ");
    for ( i = 0; i < size; i++)
    {
        printf("%d ",a[i]);
    }
    
}