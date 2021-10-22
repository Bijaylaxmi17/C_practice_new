//WAP in C to accept and print an array using pointer.

#include <stdio.h>
#define MAX_SIZE 100
void main()
{
    int a[MAX_SIZE];
    int size, i;
    int *ptr = a;
    printf("Enter the size of the array :");
    scanf("%d", &size);
    printf("Enter the elements of the array :\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", (ptr+i));
        // ptr++;
    }
    printf("\nThe elements of the array are : ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", *(ptr+i));
        // ptr++;
    }
}