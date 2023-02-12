#include <stdio.h>
#include <stdlib.h>

int main()
{
     int n,position,array[50];
  printf("enter the number of elements");
  scanf("%d",&n);
  printf("enter the elements");
  for(int i=0;i<n;i++)

  {
      scanf("%d",&array[i]);
  }
  printf("enter the position where you want to delete the element in an array");
  scanf("%d",&position);
  for(int i=position-1;i<n;i++)
  {
      array[i]=array[i+1];
  }
  printf("resultant array is:\n");
  for(int i=0;i<n-1;i++)
  {
      printf("%d\n",array[i]);
  }

}
