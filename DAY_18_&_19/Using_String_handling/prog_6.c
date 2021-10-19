//WAP in C to accept two string from user and compare them.

// strcmp() accept two string as parameter and return an integer value 
// i. >0 ,if the first string is greater than second.
// ii. ==0 ,if both are equal.
// iii. <0 , if the first string is less than second. 

#include<stdio.h>
#include<string.h>
void main()
{
    char s1[30],s2[30];
    int s;
    printf("Enter the first string : ");
    scanf("%s",s1);
    printf("Enter the second string : ");
    scanf("%s",s2);
    s=strcmp(s1,s2);
    if (s==0)
    {
       printf("Both string are equal .");
    }
    else if(s>0)
    {
        printf("The first string is greater than second .");

    }
    else
    {
        printf("The first string is less than second .");
    }
}