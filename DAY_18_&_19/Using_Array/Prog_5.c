//WAP in C to accept two string from user and compare both string.

#include<stdio.h>
#include<string.h>
void main()
{
    char s1[20],s2[20];
    int i,count=0;
    printf("Enter the first string :");
    scanf("%s",&s1);
    printf("\nEnter the second string :");
    scanf("%s",&s2);
    for ( i = 0; i < 20; i++)
    {
        if (s1[i]==s2[i])
        continue;
        else
        {
            printf("%c%c\n",s1[i],s2[i]);
            count++;
        }
        
    }
    if (strlen(s1)==strlen(s2)&&count==0)
    {
        printf("The two string are identical.");
    }
    else
    {
        printf("The two string are different at %d places .",count);
    }
    
    

}