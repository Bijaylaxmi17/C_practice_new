//WAP in C to insert a number at a specified position.

#include <stdio.h>
#define MAX_SIZE 100
void main()
{
  int a[MAX_SIZE];
  int i, size, n, pos;
  printf("Enter the size of the array :");
  scanf("%d", &size);
  printf("Enter the elements of the array \n");
  for (i = 0; i < size; i++)
  {
    printf("Elements -%d : ", i);
    scanf("%d", &a[i]);
  }
  printf("\nElements of the array are\n ");
  for (i = 0; i < size; i++)
  {
    printf("a[i] : %d\n", a[i]);
  }
  printf("Enter the element and position to be inserted : ");
  scanf("%d%d", &n, &pos);
  //increase the size of array
  size++;
  //shift the elements forward
  for (i = size - 1; i >= pos; i--)

  a[i] = a[i - 1];
  a[pos - 1] = n;

  //print the updated array
  printf("\nThe above array after insertion : ");
  for (i = 0; i < size; i++)
  {
    printf("%d ", a[i]);
  }
}