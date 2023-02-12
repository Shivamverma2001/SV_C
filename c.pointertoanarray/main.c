//write a program to take input from the user and store it in an array using pointer and display the elements of an array using pointer
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],n;//subscript notation/pointer
    int *p=a;
    printf("enter the number of element you want to store in an arrray");
    scanf("%d",& n);//n=5
    printf("enter your element one by one:\n");
    for(int i=0;i<n;i++)//i=0,1,...4
    {
        scanf("%d",(p+i));//(0)
    }
    printf("the elements inserted in an array ");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",*(p+i));//index *(0),*(1),...*(4)
    }
}
