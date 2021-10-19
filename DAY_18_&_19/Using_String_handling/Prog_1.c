//WAP in C to accept a string from user and find the length of the entered string.

#include<stdio.h>
#include<string.h>
void main()
{
    char s[20];
    printf("Enter a string :");
    scanf("%s",&s);
    printf("\n The length of the entered string is %d",strlen(s));
}