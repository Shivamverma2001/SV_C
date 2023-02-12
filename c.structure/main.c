#include <stdio.h>
#include <stdlib.h>


    struct student
    {
        char name[30];
        int roll;
        float marks;
    }s1,s2;

    int main()
    {
  printf("enter the name of the student");
  gets(s1.name);
  printf("\n enter the roll-no");
  scanf("\n%d",&s1.roll);
  printf("\n enter the marks");
  scanf("\n%f",&s1.marks);
    printf("enter the name of the student");
  scanf("%s",s2.name);
  printf("\n enter the roll-no");
  scanf("\n %d",&s2.roll);
  printf("\n enter the marks");
  scanf("\n %f",&s2.marks);
  printf("\n The details of first student is %s\t %d\t%f",s1.name,s1.roll,s1.marks);
   printf("\n The details of second student is %s\t %d\t%f",s2.name,s2.roll,s2.marks);
}

