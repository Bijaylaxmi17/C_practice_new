//WAP in C to accept a 3x3 matrix and find the determinant of matrix.

#include<stdio.h>
void main()
{
    int A[3][3];
    int row,col,det;
    int a,b,c,d,e,f,g,h,i;
    printf("Enter the elements of matrix A \n");
    for(row=0 ;row<3 ; row++)
    {
        for(col=0 ; col<3 ; col++)
        {
            printf("Enter a[%d][%d] value : ",row,col);
            scanf("%d",&A[row][col]);
        }
    }
    printf("\nThe elements of matrix A are :");
    for(row=0 ;row<3 ; row++)
    {
        printf("\n");
        for(col=0 ; col<3 ; col++)
        {
            printf("\t%d",A[row][col]);
        }
    }
    a=A[0][0];
    b=A[0][1];
    c=A[0][2];
    d=A[1][0];
    e=A[1][1];
    f=A[1][2];
    g=A[2][0];
    h=A[2][1];
    i=A[2][2];
    det=(a*(e*i-f*h))-(b*(d*i-g*f))+(c*(d*h-g*e));
    printf("\nThe determinant of the above matrix is %d",det);
}