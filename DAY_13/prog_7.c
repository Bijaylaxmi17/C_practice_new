//WAP in C to print all unique elements in an array .

#include <stdio.h>
#define MAX_SIZE 100
void main()
{
    int a[MAX_SIZE], freq[MAX_SIZE];
    int i, j, size, count;
    count = 1;
    printf("Enter the size of array :");
    scanf("%d", &size);
    printf("Enter the elements in the array : ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
        freq[i] = -1;
    }
    for (i = 0; i < size; i++)
    {
        for (j = j + 1; j < size; j++)
        {
            if (a[i] == a[j])
            {
                count++;
                freq[j] = 0;
            }
        }
        if (freq[i] != 0)
        {
            freq[i] = count;
        }
    }
    printf("\n Unique elements in the array are :");
     for (i = 0; i < size; i++)
    {
        if (freq[i] == 1)
        {
            printf("%d ", a[i]);
        }
    }
}