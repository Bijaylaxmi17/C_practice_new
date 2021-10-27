//WAP in C to check whether an entered number is even or odd using function with no argument but return a value.

#include<stdio.h>
void main()
{
    int get();
    int a;
    a=get();
    if (a%2==0)
    {
       printf("%d is an even number.",a);
    }
    else
    {
       printf("%d is an odd number.",a);
    }
}
int get()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    return(x);
}