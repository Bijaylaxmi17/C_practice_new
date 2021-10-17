//WAP in C to find the transpose of a matrix.

#include<stdio.h>
void main()
{
    int a[10][10],b[10][10];
    int i,j,m,n;
    printf("Enter the number of rows and columns of matrix between[1-10] :");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of matrix\n");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
           printf("Enter a[%d][%d] value :",i,j);
           scanf("%d",&a[i][j]);
        }
        
    }
    printf("\nElements of matrix A are :");
    for ( i = 0; i < m; i++)
    {
        printf("\n");
        for ( j = 0; j < n; j++)
        {
            printf("\t%d",a[i][j]);
        }
        
    }
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    b[j][i]=a[i][j];
    printf("\nElements of transpose matrix A are :");
    for ( i = 0; i < n; i++)
    {
        printf("\n");
        for ( j = 0; j < m; j++)
        {
            printf("\t%d",b[i][j]);
        }
        
    }
    
    
}