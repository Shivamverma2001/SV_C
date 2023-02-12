//Lagrange interpolation method
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float x[10],y[10],temp=1,f[10],sum,p;
    int i,n,j,k=0,c;
    printf("How many records you will be entered :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the value of x%d ",i);
        scanf("%f",&x[i]);
        printf("Enter the value of f(x%d)  ",i);
        scanf("%f",&y[i]);
    }
    printf("\n Enter X for finding f(x) ");
    scanf("%f",&p);
    for(i=0;i<n;i++)
    {
        temp=1;
        k=i;
        for(j=0;j<n;j++)
        {
            if(k==j)
            {
                continue;
            }
            else
            {
                temp=temp*((p-x[j])/(x[k]-x[j]));

            }
        }
        f[i]=y[i]*temp;
    }
    for(i=0;i<n;i++)
    {
        sum=sum+f[i];
    }
    printf("\n f(%0.1f)=%f",p,sum);
    getch();
}
