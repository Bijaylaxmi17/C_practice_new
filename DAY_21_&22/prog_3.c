//WAP in C to swap two number using pointer.

#include<stdio.h>
void main()
{
    int num1,num2,temp;
    int *ptr1,*ptr2;
    ptr1=&num1;
    ptr2=&num2;
    printf("Enter two number :");
    scanf("%d%d",&num1,&num2);
    printf("Value of two number before swapping are %d and %d",num1,num2);
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
    printf("\nValue of two number after swapping are %d and %d",*ptr1,*ptr2);

}