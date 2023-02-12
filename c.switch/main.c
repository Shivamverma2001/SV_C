/*take integer value from the user and accordingly print weekday
0-sunday
1-monday
2-tues......6-saturday
except 0-6 please enter only integer from 0-6*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a;
  printf("enter integer from 0-6 to check the weekday");
  scanf("%d",&a);
  switch(a)
  {
  case 0:
    printf("sunday");
    break;
  case 1:
    printf("Monday");
    break;
     case 2:
    printf("tuesday");
    break;
     case 3:
    printf("wednesday");
    break;
     case 4:
    printf("thursday");
    break;
     case 5:
    printf("friday");
    break;
     case 6:
    printf("saturday");
    break;
     default:
        printf("please enter a integer value which lie from 0-6");
        break;
  }
  return 0;
}
