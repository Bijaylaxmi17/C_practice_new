//WAP in C to count a total number of duplicate elements in an array.

#include<stdio.h>
#define MAX_SIZE 100
void main()
{
    int a[MAX_SIZE];
    int i,j,size,count=0;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    printf("Enter the elements of array : ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if (a[i]==a[j])
            {
               count++;
               break;
            }
            
        }
    }
 printf("\n Total number of duplicate elements found in array = %d",count);

}