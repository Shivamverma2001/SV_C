/* Write a program to generate a random number between 0 to 100 and the user is guess that how the number is and then show how many chance he takes
to guess the number
*/
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main()
{
 int rn,n,sum=0,c1=0;
 int c2=0;
srand(time(0));
rn=rand()%100;
printf("This is the chance of 1st player to guess the number between 0 to 100\n");
 printf("Enter the number which you guess");
 scanf("%d",&n);
 a:
     if(rn!=n)
 {
     if(rn<n)
     {
         sum=-1;
     }
     else if(rn>n)
        sum=1;
 }
    if(rn==n)
 {
     sum=0;
 }
 if(sum==-1)
 {
      printf("Your number is too large please enter smaller number");
            scanf("%d",&n);
            c1++;
            goto a;
 }
 else if(sum==1)
 {
     printf("Your number is too smaller please enter larger number");
        scanf("%d",&n);
        c1++;
        goto a;
 }
 else if(sum==0)
 {
     printf("You guess is correct");
     c1++;
 }
 printf("\n You guess the number in %d chances",c1);
 srand(time(0));
rn=rand()%100;
printf("\nThis is the chance of 2nd player to guess the number between 0 to 100\n");
 printf("\nEnter the number which you guess");
 scanf("%d",&n);
 b:
     if(rn!=n)
 {
     if(rn<n)
     {
         sum=-1;
     }
     else if(rn>n)
        sum=1;
 }
    if(rn==n)
 {
     sum=0;
 }
 if(sum==-1)
 {
      printf("Your number is too large please enter smaller number");
            scanf("%d",&n);
            c2++;
            goto b;
 }
 else if(sum==1)
 {
     printf("Your number is too smaller please enter larger number");
        scanf("%d",&n);
        c2++;
        goto b;
 }
 else if(sum==0)
 {
     printf("You guess is correct");
     c2++;
 }
 printf("\n You guess the number in %d chances",c2);
 if(c1<c2)
    printf("\n 1st player is win the game\n");
  else if(c1>c2)
    printf("\n 2nd player is win the game\n");
     if(c1==c2)
    printf("\n The game is draw \n");
}

