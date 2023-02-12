#include <stdio.h>
#include <stdlib.h>

struct address
{
    char house_name[30];
    char city[30];
    char street_name[30];

};
struct employee//nesting structure
{
    int id;
    char name[30];
    int salary;
    struct address add;//nested structure
};
int main()
{
    struct employee E;
    printf("enter employee id");
    scanf("%d",&E.id);
    printf("enter name");
    scanf("%s",&E.name);
    printf("enter salary");
    scanf("%d",&E.salary);
    printf("enter house name");
    scanf("%s",E.add.house_name);
    printf("enter your city name");
    scanf("%s",E.add.city);
    printf("enter your street name");
    scanf("%s",E.add.street_name);
    printf("%d%s%d%s%s%s",E.id,E.name,E.salary,E.add.house_name,E.add.city,E.add.street_name);

}
