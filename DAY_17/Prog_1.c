//WAP in C to find the sum of each row and column of a matrix.

#include<stdio.h>
void main()
{
    int a[10][10];
    int m,n,i,j,sumRow,sumCol;
    printf("Enter the number of rows and columns of matrix :");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of matrix :");
    for ( i = 0; i < m; i++)
    {
        printf("\n");
        for ( j = 0; j < n; j++)
        {
           scanf("\t%d",&a[i][j]);
        }
        
    }
    for ( i = 0; i <m; i++)
    {
        sumRow=0;
        for ( j = 0; j < n; j++)
        {
           sumRow=sumRow+a[i][j];
        }
      printf("\nSum of the elements of row %d =%d",i+1,sumRow);  
    }
    for ( i = 0; i <m; i++)
    {
        sumCol=0;
        for ( j = 0; j < n; j++)
        {
           sumCol=sumCol+a[j][i];
        }
      printf("\nSum of the elements of column %d =%d",i+1,sumCol);  
    }
    
    
}