//WAP in C to store the different elements of an array using pointer.
#include <stdio.h>
void main()
{
    int *a[3];
    int s[3] = {2, 8, 6};
    int k;
    for (k = 0; k < 3; k++)
     a[k] = s + k;
    printf("\n\t     Address     Element   ");
    for (k = 0; k < 3; k++)
    {
        printf("\t %u ",a[k]);
        printf("\t \n %d",*a[k]);
    }
    

}