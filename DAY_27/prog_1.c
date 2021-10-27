//WAP in C to find the sum of two number using function with argument and with return value.


#include<stdio.h>
void main()
{
    int add(int x, int y);
    int a,b,sum;
    printf("Enter the value of a and b:");
    scanf("%d%d",&a,&b);
    sum=add(a,b);
    printf("Sum of %d and %d is %d",a,b,sum);
}
int add(int x, int y)
{
    int z;
    z=x+y;
    return(z);
}