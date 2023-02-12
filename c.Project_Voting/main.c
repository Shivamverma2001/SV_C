#include<stdio.h>
#include<stdlib.h>

int main()
{
    int bjp=0;
    int congress=0;
    int vote;
    int national_id;
    int stop_voting;
    for(int i=1;i>0;i++)
    {
        printf("'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''");
        printf("\n'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''");
        printf("\n\t\t\t\t\t\t\t\t\t\tWelcome to the National election \n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tof \n\t\t\t\t\t\t\t\t\t\tPeople's Republic of INDIA\t\t\t\t\t\t\t\t\t\t");
        printf("\n'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''");
        printf("\n'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''");
        printf("\nInstructions: \n1.First, you need insert your National ID Card on the given Card Holder. \n2. Enter National ID Number (0 to 5)");
        printf("\n3. If you want to vote BJP press '1',.\n4. If you want to vote CONGRESS press'2'\n");
        printf("\n---------Enter Your National ID Card and Type your National ID Number--------\n");
        printf("National ID Number");
        scanf("%d",&national_id);
        vote=voter_id(national_id);
        if(vote==1)
        {
            bjp++;
            printf("\t You have successfully voted BJP. \n\t Thank you for fulfilling your duty as a CITIZEN \n\n\n");
        }
        else if(vote==2)
        {
            congress++;
            printf("\t You have successfully voted CONGRESS. \n\t Thank you for fulfilling your duty as a CITIZEN \n\n\n");
        }
        printf("''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''");
        printf("''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''");
        printf("Instruction: 5. To stop voting press'9'.\n\t\t6. To continue voting press any other number. \n press: ");
        scanf("%d",&stop_voting);
        if(stop_voting==9)
        {
        printf("\n\n\n");
        if(bjp>congress)
            printf("\n\n\n BJP won the vote by %d votes\n\n",bjp);
     if(bjp<congress)
            printf("\n\n\n CONGRESS won the vote by %d votes\n\n",congress);
       if(bjp==congress)
            printf("\n\n\n The election is drawn both got %d & %d votes\n\n",bjp,congress);
            break;
            }
    }
    return 0;
}
int voter_id(int id_numb)
{
    int vote;
    int invalid=3;
    if(id_numb==0)
    {
        printf("\nWelcome Shivam Verma, Please give your valuable vote");
        scanf("%d",&vote);
        return vote;
    }
    else if(id_numb==1)
    {
        printf("\nWelcome Himanshu Verma, Please Give your valuable vote");
        scanf("%d",&vote);
        return vote;
    }
      else if(id_numb==2)
    {
        printf("\nWelcome Shiv Verma, Please give your valuable vote");
        scanf("%d",&vote);
        return vote;
    }
    else if(id_numb==3)
    {
        printf("\nWelcome Shivaay Verma, Please Give your valuable vote");
        scanf("%d",&vote);
        return vote;
    }
     else if(id_numb==4)
    {
        printf("\nWelcome Shivalik Verma, Please Give your valuable vote");
        scanf("%d",&vote);
        return vote;
    }
     else if(id_numb==5)
    {
        printf("\nWelcome Krishna Verma, Please Give your valuable vote");
        scanf("%d",&vote);
        return vote;
    }
    else
    {
        printf("\n Sorry, You don't have eligibility for voting \n");
        return invalid;
    }
}

