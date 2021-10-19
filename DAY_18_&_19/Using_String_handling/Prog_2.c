//WAP in C to accept a string from user and print the reverse of the entered string.

#include<stdio.h>
#include<string.h>
void main()
{
    char s[20];
    printf("Enter a string :");
    scanf("%s",&s);
    printf("\n The reverse of the entered string is %s",strrev(s));
}