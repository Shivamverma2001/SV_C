#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,subject[10],sum=0,average=0;
    printf("enter the number of subject");
    scanf("%d",&n);
    printf("enter the marks of your subjects");
    for(int i=0;i<=n-1;i++)
    {
        scanf("%d",&subject[i]);
        sum=sum+subject[i];
    }
    printf("the total marks is%d\n",sum);
    average=sum/n;
    printf("average marks you gain%d",average);
}
