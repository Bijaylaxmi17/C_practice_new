//WAP in C to accept two string from user and print the concatenation of two string.

#include<stdio.h>
void main()
{
    char s[50],a[20],b[20];
    int i,j;
    printf("Enter the first string : ");
    gets(a);
    printf("\nEnter the second string :");
    gets(b);
    for ( i = 0; a[i]!='\0'; i++)
    s[i]=a[i];
    s[i]=' ';
    for(j=0 ; b[j]!='\0';j++)
    s[i+j+1]=b[j];
    s[i+j+1]=' ';
    printf("The string after concatenation is : ");
    printf("%s",s);

    
    
}