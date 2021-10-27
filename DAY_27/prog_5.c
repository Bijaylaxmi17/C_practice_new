//WAP in C for returning multiple values using function.
#include <stdio.h>
void main()
{
    void show(int a, int b, int *c, int *d);
    int a = 30, b = 10, c, d;
    show(a, b, &c, &d);
    printf("Multiplication of a and b=%d \n Division of a and b=%d", c, d);
}
void show(int a, int b, int *p, int *q)
{
    *p = a * b;
    *q = a / b;
}
