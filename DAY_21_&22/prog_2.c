//WAP in C to add two number using pointer.

#include<stdio.h>
void main()
{
    int num1,num2,sum;
    int *ptr1,*ptr2;
    ptr1=&num1;
    ptr2=&num2;
    printf("Enter two number :");
    scanf("%d%d",ptr1,ptr2);
    sum=*ptr1+*ptr2;
    printf("\nThe sum of two number is =%d",sum);
}