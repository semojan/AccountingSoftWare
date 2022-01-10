#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
void firstMenu ();
void signUp ();
void logIn ();
void main()
{
    firstMenu();
    system("cls");
    printf("Thanks for using this soft-ware!");
}

void firstMenu ()//this function is the first menu displayed for the user
{
    int firstOption;
    printf("Welcome\nwhat do you wish to do?\n\n1.Sign up\n2.log in\n3.exit");
    printf("\n>>please enter your choice:");
    scanf("%d",&firstOption);

    if(firstOption==1)
    {
        system("cls");
        signUp();
    }
    else if(firstOption==2)
        {
            system("cls");
            logIn();
        }
}

void signUp ()
{
    printf("1");
}
void logIn ()
{
    printf("2");
}
