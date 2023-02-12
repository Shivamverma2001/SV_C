#include <stdio.h>
#include <stdlib.h>
struct employee
{
    int id;
    char name[30];
    int salary;
    struct dob
    {
        int date;
        int month;
        int year;
    }db1;
}emp={1,"Shivam",99999999,{21,11,2001}};
int main()
{
    printf("Employee id %d their name %s their salary %d date of birth %d-%d-%d",emp.id,emp.name,emp.salary,emp.db1.date,emp.db1.month,emp.db1.year);
}
