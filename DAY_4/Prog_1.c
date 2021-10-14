// WAP in C to check wheather a triangle can be formed by the given value for the trianle.

#include<stdio.h>
void main()
{
    int ang1,ang2,ang3,sum;
    printf("Enter the value of three triangle :");
    scanf("%d%d%d",&ang1,&ang2,&ang3);
    sum=ang1+ang2+ang3;
    if (sum==180)
    {
        printf("\n Triangle can be formed");

    }
    else
    {
        printf("\n Triangle can not be fprmed.");
    }
    

}