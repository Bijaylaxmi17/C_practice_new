//WAP in C to delete an element of the array from a specified position.

#include <stdio.h>
#define MAX_SIZE 100
void main()
{
  int a[MAX_SIZE];
  int i, size, pos;
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
    printf(" %d ", a[i]);
  }
  printf("\nEnter the  position to be deleted : ");
  scanf("%d",  &pos);
  if (pos<0||pos>size)
  {
    printf("\nEntered position is invalied.\nPlease enter a valied position .");
  }
  else
  {
      for ( i = pos-1; i < size-1; i++)
      {
         a[i]=a[i+1];
      }
      size--;
      printf("\nElements of the array after deletion are : ");
      for ( i = 0; i < size; i++)
      {
          printf("%d ",a[i]);
      }
      
      
  }
  

}