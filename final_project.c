#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

void firstMenu ();
void signUp ();
void logIn ();

struct userInfo{
        char name[20];
        char family[20];
        char id[11];
        char phone[12];
        char email[30];
        char pass[30];
        struct userInfo *infoPointer;
    };

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


void signUp () //this function receives user's information for sign up and puts them in a file
{
    struct userInfo users;
    FILE *fp;
    char passCheck[30];
    int passOption;

    fp=fopen("userInformation.txt","r+");

    if(fp==NULL){
        printf("error,please try again");
        getch();
    }
    else{
        printf("plese enter the following required information:\nname:");
        scanf("%s",users.name);
        fputs(users.name,fp);
        fputs("\n",fp);

        printf("family name:");
        scanf("%s",users.family);
        fputs(users.family,fp);
        fputs("\n",fp);

        printf("id:");
        scanf("%s",users.id);
        fputs(users.id,fp);
        fputs("\n",fp);

        printf("phone number:");
        scanf("%s",users.phone);
        fputs(users.phone,fp);
        fputs("\n",fp);

        printf("email:");
        scanf("%s",users.email);
        fputs(users.email,fp);
        fputs("\n",fp);

        printf("password:");
        scanf("%s",users.pass);
        fputs(users.pass,fp);
        fputs("\n",fp);

        printf("verify password:");
        scanf("%s", passCheck);

        while(strcmp(users.pass,passCheck)!=0){
            printf("\n\nyour password doesn't match it's verification!\nwhat do you wish to do?\n\n");
            printf("1.change password\n2.fix the verification\nyour option:");
            scanf("%d",&passOption);
            if (passOption==1){
                printf("password:");
                scanf("%s",users.pass);
                fputs(users.pass,fp);
                fputs("\n",fp);
                printf("verify password:");
                scanf("%s", passCheck);
            }
            else if (passOption==2){
                fputs("\n",fp);
                printf("verify password:");
                scanf("%s", passCheck);
            }
        }
        getch();
    }
}

void logIn ()
{
    printf("2");
}
