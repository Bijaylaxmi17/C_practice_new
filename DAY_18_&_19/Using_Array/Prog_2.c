//WAP in C to accept a string from user and print the reverse of the entered string.

#include <stdio.h>
void main()
{
    char a[20];
    int i, j;
    printf("Enter a string :");
    scanf("%s", a);
    printf("\nThe entered string is : %s", a);
    for (i = 0; a[i] != '\0'; i++);
    printf("\nThe reverse of entered string is :");
    for (j = i - 1; j >= 0; j--)
    {
        printf("%c", a[j]);
    }
}