//WAP in C to print the diagonal elements of a matrix and sum of diagonal elements.

#include <stdio.h>
void main()
{
    int a[10][10];
    int i, j, m, n,sum=0;
    
    printf("Enter the number of rows and columns of matrix :");
    scanf("%d%d", &m, &n);

    if (m == n)
    {
        printf("Enter the elements of matrix \n ");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("Enter a[%d][%d] value : ", i, j);
                scanf("%d", &a[i][j]);
            }
        }
        printf("\nThe diagonal of square matrix are :");
        for (i = 0; i < m; i++)
        {
            printf("\n");
            for (j = 0; j < n; j++)
            {
                if (i == j)
                {
                    printf("\t%d", a[i][j]);
                    sum=sum+a[i][j];
                }
                else
                {
                    printf("\t");
                }
            }
        }
        
        printf("\nThe sum of diagonal of matrix is %d", sum);
    }
    else
    {
        printf("\n Matrix is not a square matrix");
    }
}