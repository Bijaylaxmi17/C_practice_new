//WAP in C for working void pointer.
#include<stdio.h>
int a;
float b;
char c;
void *ptr;
void main()
{
    *(int*)ptr=20;
    printf("a=%d",a);
    *(float*)ptr=7.8;
    printf("Q=%f",b);
    *(char*)ptr= 'B';
    printf("ch=%c",c);

}