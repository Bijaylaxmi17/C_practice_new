//WAP in C to accept two string and print the concatenation of  two string .

#include<stdio.h>
#include<string.h>
void main()
{
    char a[20],b[20];
    printf("Enter the first string : ");
    gets(a);
    printf("\nEnter the second string :");
    gets(b);
    strcat(a," ");
    strcat(a,b);
    printf("The string after concatenation is : %s",a);
}