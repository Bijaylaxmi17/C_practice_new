//WAP in C to accept two matrix from user and  find the addition of those matrix.

#include <stdio.h>
void main()
{
    int a[20][20], b[20][20], c[20][20];
    int i, j, m, n, p, q;
    printf("Enter the number of rows and columns of matrix A between[1-20] :");
    scanf("%d%d", &m, &n);
    printf("Enter the number of rows and columns of matrix B between[1-20] :");
    scanf("%d%d", &p, &q);
    if (m != p || n != q)
    {
        printf("\nAddition can not be done.");
    }
    else
    {

        printf("Enter the elements of matrix A :\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        printf("Enter the elements of matrix B :\n");
        for (i = 0; i < p; i++)
        {
            for (j = 0; j < q; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                c[i][j] = a[i][j] + b[i][j];
            }
        }
        printf("\nThe elements of matrix A are :");
        for (i = 0; i < m; i++)
        {
            printf("\n");
            for (j = 0; j < n; j++)
            {
                printf("\t%d", a[i][j]);
            }
        }
        printf("\nThe elements of matrix B are :");
        for (i = 0; i < p; i++)
        {
            printf("\n");
            for (j = 0; j < q; j++)
            {
                printf("\t%d", b[i][j]);
            }
        }
        printf("\nThe elements of matrix C are :");
        for (i = 0; i < m; i++)
        {
            printf("\n");
            for (j = 0; j < n; j++)
            {
                printf("\t%d", c[i][j]);
            }
        }
    }
}