//WAP in C to sort an array in descending order.

#include<stdio.h>
void main()
{
    int a[5];
    int i,j,temp;
    printf("Enter the elements of array : \n");
    for ( i = 0; i < 5; i++)
    {
        printf("Element - %d : ",i);
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < 5; i++)
    {
        for ( j = i+1; j < 5; j++)
        {
           if (a[i]<a[j])
           {
              temp=a[i];
              a[i]=a[j];
              a[j]=temp;
           }
           
        }
        
    }
    printf("\nElements of the array in descending order : ");
    for ( i = 0; i <5; i++)
    {
      printf("%d ",a[i]);
    }
    
    
}