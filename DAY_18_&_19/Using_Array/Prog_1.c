//WAP in C to accept a string from user and find the length of the entered string.

#include<stdio.h>
void main()
{
    char arr[30];
    int i;
    printf("Enter a string : ");
    scanf("%s",&arr);
    for ( i = 0; arr[i]!='\0'; i++);
    printf("The length of the entered string is %d ",i);
}