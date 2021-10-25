//WAP in C to display the elements of two dimensional array using pointer.

#include<stdio.h>
void main()
{
    int a[][3]={{2,3,5},{4,9,6},{9,7,3}};
    int i,*ptr;
    ptr=a;
    for ( i = 0; i <9; i++)
    {
       printf("%u ",ptr+i);
       printf("[%d] ",*(ptr+i));
       if (i==2||i==5)
       {
           printf("\n");
       }
       
    }
    

}