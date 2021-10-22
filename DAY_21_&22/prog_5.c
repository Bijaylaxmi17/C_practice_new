//WAP in C to show the relationship between array elements and their address.

#include<stdio.h>
void main()
{
    static int x[5]={10,20,30,40,50};
    int i;
    for ( i = 0; i < 5; i++)
    {
        printf("\n i=%d  x[i]=%d   *(x+i)=%d",i,x[i],*(x+i));
    }
    
}