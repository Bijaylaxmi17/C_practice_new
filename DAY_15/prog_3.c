//WAP in C to search a number in array using linear search technique.

#include<stdio.h>
#define MAX_SIZE 100
int main()
{
    int a[MAX_SIZE];
    int i,num,size;
    printf("Enter the size of array between [1-100] :");
    scanf("%d",&size);
    printf("Enter the elements of array :\n");
    for ( i = 0; i <size; i++)
    {
        printf("element - %d :",i);
        scanf("%d",&a[i]);
    }
    printf("\nEnter a number you want to search :");
    scanf("%d",&num);
    for ( i = 0; i <size; i++)
    {
        if (a[i]==num)
        {
            printf("%d is found at position %d",num,i+1);
            return 0;
        }
        
        
    }

     printf("%d is not found ",num);
    return 0;
}