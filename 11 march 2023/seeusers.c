#include <stdio.h>
#include <string.h>
// program name
int main()
{
    // start coding
    char name[20];
    char emailid[50];
    char username[20];
    char password[20];
    int age;
    char line[200];
    int condition1 = 0, condition2 = 0;
    printf("Please enter your name:");
    gets(name);
    printf("Write your username:");
    gets(username);
    fflush(stdin);
    FILE *f1 = fopen("users.txt", "r");
    while (fgets(line, 1000, f1))
    {
        char *userdata = strtok(line, ",");
        int count = 0;
        while (userdata != NULL)
        {
            count++;
            if (count == 1)
            {
                condition1 = strcmp(name, userdata);
                // printf("username = %s", userdata);
            }
            if (count == 3)
            {
                condition2 = strcmp(username, userdata);
                // printf("password = %s", userdata);
            }
            userdata = strtok(NULL, ",");
            }
         if (!condition1 && !condition2)
            {

                break;
            }
    }
    fclose(f1);

    if (!condition1 && !condition2)
    {
        f1 = fopen("users.txt", "r");
        while (fgets(line, 1000, f1))
        {
            char *userdata = strtok(line, ",");
            int count = 0;
            while (userdata != NULL)
            {
                count++;
                if (count == 1)
                {
                    printf("name = %s\n", userdata);
                }
                if (count == 2)
                {
                    printf("email id = %s\n", userdata);
                }
                if (count == 3)
                {
                    printf("username = %s\n", userdata);
                }
                if (count == 5)
                {
                    printf("age = %s\n", userdata);
                }
                userdata = strtok(NULL, ",");
            }
        }
        fclose(f1);
    }
    else
    {
        printf("Your name or username doesnt exist");
    }

    return 0;
}