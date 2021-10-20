//WAP in C to accept five name from user and print the sorting list of name in alphabetical order.

#include<stdio.h>
#include<string.h>
void main()
{
    char a[5][20],t[20];
    int i,j;
    printf("Enter the name of 5 person :\n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%s\n",&a[i]);
    }
    printf("\nThe sorted list of 5 person is in alphabetical order :\n");
    for ( i = 0; i <5; i++)
    {
       for ( j = i+1; j < 5 ;j++)
       {
           if (strcmp(a[i],a[j])>0)
           {
              strcpy(t,a[i]);
              strcpy(a[i],a[j]);
              strcpy(a[j],t);
           }
           
       }
       
    }
    
    for ( i = 0; i <5; i++)
    {
       printf("%s\n",a[i]);
    }
    
    
}