/*take input from the user
0-no pint
1-it is a point
2-line
3-triangle
4-rectangle
5-pentagon*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    printf("please enter a integer value");
    scanf("%c",&a);
    switch(a)
{
     case '0':
    printf("there is no point");
    break;
  case '1':
    printf("there is a point");
    break;
     case '2':
    printf("it is a line");
    break;
     case '3':
    printf("triangle");
    break;
     case '4':
    printf("rectangle");
    break;
     case '5':
    printf("pentagonal");
    break;
     default:
        printf("please enter a integer value which lie from 0-5");
        break;
    return 0;}
}
