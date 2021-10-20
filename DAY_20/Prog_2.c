//WAP in C to accept a string from user and count a character that appears in a given text for number of times.
#include<stdio.h>
#include<string.h>
void main()
{
    char a[20];
    char search;
    int i, count=0;
    printf("Enter a string : ");
    gets(a);
    printf("\nEnter a character to count the number of appearences :");
    search=getchar();
    for ( i = 0; a[i] !='\0'; i++)
    {
       if(a[i]==search)
       count++;
    }
    printf("\nCharacter %c found in given string =%d times",search,count);
}