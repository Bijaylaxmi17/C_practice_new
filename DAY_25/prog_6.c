//WAP in C for definition and use of pointer to pointer.

#include<stdio.h>
void main()
{
    int *p;
    int **ptr;
    int a;
    p=&a;
    ptr=&p;
    *p=100;
    printf("\n The variables a data contains is %d ",a);
    **ptr=200;
    printf("\n The variables  data contains is %d ",a);
    **ptr=300;
    printf("\n The variables  data contains is %d ",a);
}