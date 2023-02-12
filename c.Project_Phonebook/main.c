#include <stdio.h>
#include<windows.h>

void add_contact();
void search_contact();
void delete_contact();
void view_all_contact();
int main()
{
    system("cls");
    printf("\t *****PHONE BOOK*****\n");
    printf("\t 1. Add Contact \n");
    printf("\t 2. Search Contact \n");
    printf("\t 3. Delete Contact \n");
    printf("\t 4. View All Contact\n");
    printf("\t 5. Exit \n");
    printf("Enter Your Choice:->");
    int option;
    scanf("%d",&option);
    switch(option)
    {
    case 1:
        add_contact();
        break;
    case 2:
        search_contact();
        break;
    case 3:
        delete_contact();
        break;
    case 4:
        view_all_contact();
        break;
    case 5:
        exit(0);
    default:
        main();
    }
}
void add_contact()
{
    FILE *ptr;
    char name[20],mob[20];
    ptr=fopen("contact.txt","a+");
    system("cls");
    printf("\t*****ADD CONTACT*****");
    printf("\n\t NAME          :->");
    scanf("%s",name);
    printf("\n\t MObile Number :->");
    scanf("%s",mob);
    fprintf(ptr,"%s %s \n",name,mob);
    fclose(ptr);
    printf("\n \t PRESS ANY KEY TO CONTINUE");
    getch();
    main();
}
void search_contact()
{
    FILE *ptr;
    ptr=fopen("contact.txt","r");
    system("cls");
    printf("\t*****SEARCH CONTACT*****");
    printf("\n\t Enter Name :->");
    char name[20];
    scanf("%s",name);
    char name1[20],mob[20];
    while(fscanf(ptr,"%s %s",name1,mob)!=EOF)
    {
        if(strcmp(name,name1)==0)
        {
            printf("\n \t NAME          :->%s\n",name1);
            printf("\n \t MOBILE NUMBER :->%s\n",mob);
        }
    }
    fclose(ptr);
    printf("\n \t PRESS ANY KEY TO CONTINUE");
    getch();
    main();
}
void delete_contact()
{
    FILE *ptr,*ptr1;
    ptr=fopen("contact.txt","r+");
    ptr1=fopen("temp.txt","w");
    system("cls");
    printf("\t*****DELETE CONTACT*****");
    printf("\n \t Enter Name :->");
    char name[20];
    scanf("%s",name);
    char name1[20],mob[20];
    while(fscanf(ptr,"%s %s",name1,mob)!=EOF)
    {
        if(strcmp(name,name1)==0)
        {
            continue;
        }
        fprintf(ptr1,"%s %s\n",name1,mob);
    }
    fclose(ptr);
    fclose(ptr1);
    ptr=fopen("contact.txt","w");
    ptr1=fopen("temp.txt","r");
    while(fscanf(ptr1,"%s %s",name1,mob)!=EOF)
    {
        fprintf(ptr,"%s %s\n",name1,mob);
    }
    fclose(ptr);
    fclose(ptr1);
    remove("temp.txt");
    printf("\n\t PRESS ANY KEY TO CONTINUE");
    getch();
    main();
}
void view_all_contact()
{
    FILE *ptr;
    ptr=fopen("contact.txt","r");
    system("cls");
    printf("\t*****ALL CONTACT*****");
    char name1[20],mob[20];
    while(fscanf(ptr,"%s %s",name1,mob)!=EOF)
    {
        printf("\n\t NAME           :->%s",name1);
        printf("\n\t  MOBILE NUMBER :->%s",mob);
    }
    fclose(ptr);
    printf("\n\t PRESS ANY KEY TO CONTINUE");
    getch();
    main();
}
