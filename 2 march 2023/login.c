#include <stdio.h>
#include "database.h"
#include <string.h>

void printLoginMesage(int isLogin)
{
    if (isLogin)
    {
        printf("Login succesfully");
    }
    else
    {
        printf("Login is failed please try again");
    }
}

int main()
{
    // start codiing
    char username[20], password[20];
    printf("Please Enter username : ");
    gets(username);

    printf("Please Enter Password : ");
    gets(password);

    int user_count = sizeof(db_usernames) / sizeof(db_usernames[0]);
    int isLogin = 0;
    for (int i = 0; i < user_count; i++)
    {
        if ((strcmp(username, db_usernames[i]) == 0) && (strcmp(password, db_passwords[i]) == 0))
        {
            isLogin = 1;
            printLoginMesage(isLogin);
            break;
        }else{
            if(i == user_count-1){
                printf("Login is failed please try again");
            }
        }
    }

    return 0;
}