//WAP in C to accept 5 elements and display using array.

#include<stdio.h>
void main()
{
    int a[5];
    printf("Enter the elements of array : ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Elements of array are :");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",a[i]);
    }
}