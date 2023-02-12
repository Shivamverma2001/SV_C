#include <stdio.h>
#include <stdlib.h>
struct car
{
    char name[20];
    int seat;
    float price;
}mycar[100];
int main()
{ int n;
    printf("enter the number of your car");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
    printf("\n enter name of that car");
     scanf("%s",&mycar[i].name);
    //gets(mycar[i].name);
    fflush(stdin);
    printf("\n enter number of seats");
    scanf("%d",&mycar[i].seat);
    fflush(stdin);
    printf("\n enter price of your car");
    scanf("%f",&mycar[i].price);
    fflush(stdin);
    }
    for(int i=0;i<n;i++)
    {
        printf("\n details of your car is %s\t%d\t%f",mycar[i].name,mycar[i].seat,mycar[i].price);
    }
}
