//WAP in C to separate  even and odd integer of an array.

//WAP in C to find largest element in an array.

#include<stdio.h>
#define MAX_SIZE 100
void main()
{
    int a[MAX_SIZE],b[MAX_SIZE],c[MAX_SIZE];
    int i,j=0,k=0,n;
    printf("Enter the size of the array :");
    scanf("%d",&n);
    printf("Enter the elements of array : \n");
    for ( i = 0; i <n; i++)
    {
        printf("Element - %d :",i);
        scanf("%d",&a[i]);
    }
    printf("\nElements of array are : ");
    for ( i = 0; i <n; i++)
    {
        printf("%d ",a[i]);
    }
    for ( i = 0; i < n; i++)
    {
        if (a[i]%2==0)
        {
           b[j]=a[i];
           j++;
        }
        else
        {
            c[k]=a[i];
            k++;
        }
        
    }
    printf("\n The even elements are : ");
    for ( i = 0; i < j; i++)
    {
       printf("%d ",b[i]);
    }
    printf("\n The odd elements are :");
    for ( i = 0; i <k; i++)
    {
        printf("%d ",c[i]);
    }
    
    
    
}