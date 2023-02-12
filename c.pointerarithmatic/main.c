#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5]={2,3,4,5,6};
    int *p1,*p2;//declare
    p1=a;
    p1++;//post increment
    printf("%d\n",*p1);//1st index value 3
    p1--;//post decrement
    printf("%d\n",*p1);//0th index value 2
    p1=p1+2;//addition in index
    printf("%d\n",*p1);
    p1=p1-1;//subtraction in index
    printf("%d\n",*p1);
    p2=&a[4];
    printf("%d\n",*p2);//show 4th index value is 6
    printf("%d\n",p2-p1);//subtract 6-3 show 3
    while(p1<=p2)//compare
    {
        printf("%d\t",*p1);
        p1++;
    }
//     printf("%d\n",p2+p1);//invalid
//printf("%d\n",p2/p1);
//printf("d\n",p2*p1);
//printf("%d\n",p2/3);
//printf("d\n",p2*3);
//printf("%d\n",p2%3);
}
//IMPORTANT:
  //  array=&array[0];
//23456
//01234
