//WAP in C to read a string from keyboard and display it using pointer.

#include <stdio.h>
#include<string.h>
void main()
{
    char name[30], *ch;
    printf("Enter your name :");
    gets(name);
    ch = name;
    while (*ch!='\0')
    {
        printf("%c", *ch);
        ch++;
    }
}