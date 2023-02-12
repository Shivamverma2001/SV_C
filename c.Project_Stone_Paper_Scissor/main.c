//Stone, Paper, Sessior Game
#include <stdio.h>
#include <stdlib.h>
#include<time.h>


int main()
{    char cm,pm=1;
int a;
    printf("Welcome to the game stone, paper and sessior");
    printf("\n for select stone write 's', for paper write 'p' and for sessior write 'c' and for exit enter o");
  while(pm!='o')
   {
         printf("\n Enter value");
    scanf("%c",&pm);
    srand(time(0));
    a=rand()%100;
    if(a<33)
    {
        cm='s';
    }
    else if(a>=33&&a<66)
    {
        cm='p';
    }
    else
    {
        cm='c';
    }
        if(cm=='s'&&pm=='s')
        {
            printf("The game is draw");

        }
      else  if(cm=='s'&&pm=='p')
        {
            printf("You win the game");

        }
        else if(cm=='s'&&pm=='c')
        {
            printf("You loose the game");

        }
        else if(cm=='p'&&pm=='s')
        {
            printf("You loose the game");

        }
        else if(cm=='p'&&pm=='p')
        {
            printf("The game is draw");

        }
        else if(cm=='p'&&pm=='c')
        {
            printf("You win the game");

        }
        else if(cm=='c'&&pm=='s')
        {
            printf("You win the game");

        }
        else if(cm=='c'&&pm=='p')
        {
            printf("You loose the game");
        }
        else if(cm=='c'&&pm=='c')
        {
            printf("The game is draw");

        }
    }
}
