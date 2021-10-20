//WAP in C to count  the number of words in a given line of text .
#include<stdio.h>
#include<string.h>
void main()
{
    char s[30];
    int i,count=1;
    printf("Enter the line of text : ");
    gets(s);
    for ( i = 0; s[i]!='\0'; i++)
    {
        if (s[i]==' '||s[i]=='\0')
        count++;
        
    }
    printf("\n The number of words in the line of text is %d",count);
    
}