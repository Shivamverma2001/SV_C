#include <stdio.h>
#include <stdlib.h>
struct car
{
    char name[20];
    int seat;
    float price;
}mycar,*ptr;
int main()
{
    struct car mycar={"audi",8,4000000};
    ptr=&mycar;
    printf("%s%d%f",mycar.name,mycar.seat,mycar.price);
    printf("\n %s%d%f",(*ptr).name,(*ptr).seat,(*ptr).price);
    printf("\n%s%d%f",ptr->name,ptr->seat,ptr->price);

}
