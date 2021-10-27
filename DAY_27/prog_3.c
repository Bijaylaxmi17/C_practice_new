//WAP in C to display square of a number using functions with argument but without return values.

#include<stdio.h>
void main()
{
    int square(int x);
    int i;
    for ( i = 1; i <=10; i++)
    square(i);

}
int square(int x)
{
    printf("\t%d",x*x);
}