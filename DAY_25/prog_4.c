//WAP in C for finding the length of string using pointer.

#include<stdio.h>
void main()
{
    char s[30],*ptr;
    int count=0;
    printf("Enter any string between [1-30] :");
    gets(s);
    ptr=s;
    while (*ptr!='\0')
    {
        count++;
        ptr++;
    }
    printf("\nThe length of the entered string is %d",count);
}