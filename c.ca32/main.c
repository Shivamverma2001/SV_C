#include <stdio.h>
#include <stdlib.h>
  void sorting(int u);
int main()
{
    int array[200],n,t,i;
    printf("enter the number of students\n");
    scanf("%d",&n);
    printf("Please enter the marks of the students");
    for(int i=0;i<=n-1;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("marks of each student is\n");
    for (i=0;i<n;i++)
    {
        printf("%d\t",array[i]);
    }
    for(int i=0;i<=n-1;i++)
    {
           for(int j=0;j<n-i-1;j++)
        {
            if(array[j]>array[j+1])
            {
                t=array[j];
                array[j]=array[j+1];
                array[j+1]=t;
            }
        }
    }
    printf("\n marks of each student in ascending order :\n");

    for(int i=0;i<=n-1;i++)
    {
      sorting(array[i]);
    }

    }
    void sorting(int u)
    {
       printf("%d\t",u);
    }

