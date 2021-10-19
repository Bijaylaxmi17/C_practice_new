//WAP in C to accept a string from user and print it in upper case and lower case.
#include<stdio.h>
#include<string.h>
void main()
{
    char s1[30],s2[30];
    printf("Enter a string : ");
    // gets(s1);
    scanf("%s",s1);
    strcpy(s2,s1);
    printf("The entered string in upper case is : %s ",strupr(s1));
    printf("\nThe entered string in lower case is : %s ",strlwr(s2));
}