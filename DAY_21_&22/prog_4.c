//WAP in C to compare two number using pointer.

#include<stdio.h>
void main()
{
    int num1,num2;
    int *ptr1,*ptr2;
    ptr1=&num1;
    ptr2=&num2;
    printf("Enter two number :");
    scanf("%d%d",&num1,&num2);
    if (*ptr1==*ptr2)
    {
        printf("\nTwo pointer have same addresses.");
    }
    else
    {
        printf("\nTwo pointer have different addresses.");
        printf("\n The address of num1(ptr1)=%u",ptr1);
        printf("\n The address of num2(ptr2)=%u",ptr2);

    }
    
}