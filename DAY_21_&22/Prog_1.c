//WAP in C to declare and initialize a pointer.

#include<stdio.h>
void main()
{
    int num=20;
    int *ptr;
    ptr=&num;
    printf("The value of number = %d\n",num);
    printf("Address of entered number is = %d",&num);
    printf("The value of ptr =%d\n",ptr);
    printf("The address of ptr =%u\n",&ptr);
    printf("Value pointed by pointer =%d\n",*ptr);
}