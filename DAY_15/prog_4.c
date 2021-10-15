//WAP in C to merge two array(unsorted array) into one array.


#include<stdio.h>
void main()
{
    int a[5],b[5],c[10];
    int i,j=0;
    printf("\nEnter 5 elements into array A :\n");
    for ( i = 0; i < 5; i++)
    {
       printf("Element -%d :",i);
       scanf("%d",&a[i]);
    }
    printf("\nEnter 5 elements into array B :\n");
    for ( i = 0; i < 5; i++)
    {
       printf("Element -%d :",i);
       scanf("%d",&b[i]);
    }
    for ( i = 0; i < 5; i++)
    {
      c[i]=a[i];
      j++;
    }
    for ( i = 0; i < 5; i++)
    {
        c[j]=b[i];
        j++;
    }
    printf("\nThe elements of array A are :");
    for ( i = 0; i <5; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nThe elements of array B are :");
    for ( i = 0; i <5; i++)
    {
        printf("%d ",b[i]);
    }
    printf("\nThe elements of array C after merging array A and B  are :");
    for ( i = 0; i <10; i++)
    {
        printf("%d ",c[i]);
    }
    
    
    
}