//WAP in C for swapping of value using call by value.

#include<stdio.h>
void main()
{
    void swap(int x, int y);
    int a,b;
    printf("Enter the value of a and b :");
    scanf("%d%d",&a,&b);
    swap(a,b);
    printf("\nBefore swapping a=%d,b=%d",a,b);
}
void swap(int x, int y)
{
    int t;
    t=x;
    x=y;
    y=t;
    printf("After swapping a=%d,b=%d",x,y);
}