//WAP in C whether  a character is an alphabet , digits or special character.

#include<stdio.h>
void main()
{
    char ch;
    printf("Enter a character :");
    scanf("%c",&ch);
    if (ch>=a&&ch<=z||ch>=A&ch<Z)
    {
        printf("\n %c is an alphabet",ch);
    }
    else if(ch>=0&&ch<=9)
    {
        printf("\n %c is a digit",ch);
    }
    else
    {
        printf("\n %c is a special charcter",ch);
    }


    
}