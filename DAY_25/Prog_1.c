//WAP in C for finding the smallest element in an array of "n" elements using pointer.

#include <stdio.h>
#define MAX_SIZE 100
void main()
{
    int a[MAX_SIZE];
    int n, i, *ptr, size, small;
    printf("Enter the size of array [between 1-100] : ");
    scanf("%d", &size);
    printf("Enter the elements of array \n");
    for (i = 0; i < size; i++)
    {
        printf("Enter a[%d] value :", i);
        scanf("%d", &a[i]);
    }
    ptr = a;
    small = *ptr;
    ptr++;
    for (i = 0; i < size; i++)
    {
        if (small > *ptr)
        {
            small = *ptr;
            ptr++;
        }
    }
    printf("\nThe smallest element of the given array is %d", small);
}