//WAP in C to display a 2D array.

#include<stdio.h>
void main()
{
    int a[2][2]={{10,20},{4,8}};
    int i,j;
    printf("Elements of the given 2D array are :\n");
    for ( i = 0; i < 2; i++)
    {
      printf("\n");
      for ( j = 0; j < 2; j++)
      {
          printf("\t%d",a[i][j]);
      }
      
    }
    
}