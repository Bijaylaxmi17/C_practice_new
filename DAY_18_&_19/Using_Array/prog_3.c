//WAP in C to accept a string from user and print the copy of entered string.

//WAP in C to accept a string from user and find the length of the entered string.

#include<stdio.h>
void main()
{
    char a[30],b[30];
    int i;
    printf("Enter the source string : ");
    scanf("%s",&a);
    for ( i = 0; i<30; i++)
    b[i]=a[i];
    printf("The source string is : %s",a);
    printf("\nThe destination string is : %s",b);
   
}