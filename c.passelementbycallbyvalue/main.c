//pass element by element by call by value method
#include<stdio.h>
void display(char ch)
{

    printf("%c",ch);
}
int main()
{
    char array[3]={'a','b','c'};
    for(int i=0;i<=2;i++)
        display(array[i]);//calling
}
