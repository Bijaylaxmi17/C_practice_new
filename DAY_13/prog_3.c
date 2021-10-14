//WAP in C to read n number of values in an array and display it in reverse order.

#include<stdio.h>
void main()
{
    int a[100],i,n;
    printf("Enter the number of element store in the array : ");
    scanf("%d",&n);
    printf("Enter the elements of array");
    for ( i = 0; i <n; i++)
    {
        printf("\n Elements -%d :",i);
        scanf("%d",&a[i]);
    }
    printf("The elements stored in array are :");
    for ( i = 0; i < n; i++)
    {
        printf("%d",a[i]);
    }
    printf("\nThe element stored in array in reverse order are :");
    for(i=n;i>0;i--)
    {
       printf("%d ",a[i]); 
    }
    
    
}