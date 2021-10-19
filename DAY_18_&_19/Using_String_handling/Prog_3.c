//WAP in C to accept a string from user and print the copy of the entered string.

#include<stdio.h>
#include<string.h>
void main()
{
    char s1[20],s2[20];
    printf("Enter a string : ");
    scanf("%s",&s1);
    printf("The source string is : %s\n ",s1);
    printf("The destination string is : %s",strcpy(s2,s1));
}