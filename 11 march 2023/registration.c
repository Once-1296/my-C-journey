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
    printf("*** Welcome to registration page***\n\n");
    printf("Please enter your name:");
    gets(name);
    printf("Please enter your email id:");
    gets(emailid);
    printf("Write your username:");
    gets(username);
    printf("Type your password:");
    gets(password);
    printf("Please enter your age:");
    scanf("%d", &age);
    fflush(stdin);
    int condition1 = 0, condition2 = 0, condition3 = 0;
    FILE *f1 = fopen("users.txt", "r");
    while (fgets(line, 1000, f1))
    {
        char *userdata = strtok(line, ",");
        int count = 0;
        while (userdata != NULL)
        {
            count++;
            if (count == 2)
            {
                condition3 = strcmp(emailid, userdata);
                // printf("condition 3 = %d\n", condition3);
            }
            if (count == 3)
            {
                condition1 = strcmp(username, userdata);
            //   printf("condition 1 = %d\n", condition1);
            }
            
            if (count == 4)
            {
                condition2 = strcmp(password, userdata);
                // printf("condition 2 = %d\n", condition2);
            }
            userdata = strtok(NULL, ",");
        }
          if (condition1 == 0 || condition2 == 0 || condition3 == 0)
    {
        break;
       
    }
    }
   fclose(f1);
    // printf("\n %d \n %d \n %d", condition1, condition2, condition3);
   if(condition1 == 0 || condition2 == 0 || condition3 == 0)
    {
          printf("The email id / username / password is already in use.");
       
    }
 else{

     f1 = fopen("users.txt", "a");
        fprintf(f1, "%s, %s, %s, %s, %d\n", name, emailid, username, password, age);
        fclose(f1);
 }
    return 0;
}