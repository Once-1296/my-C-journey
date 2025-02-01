#include<stdio.h>
#include<string.h>
// program name
int main(){
     // start coding
     
char name[20];
char emailid[50];
char username[20];
char password[20];
int age;
char line[200];
int condition1 = 0, condition2 = 0;
printf("***Welcome to login page***\n\n");
printf("Please enter your username: ");
gets(username);
printf("Please enter your password: ");
gets(password);

FILE *f1 = fopen("users.txt","r");
while(fgets(line,1000,f1)){
    char *userdata = strtok(line, ",");
    int count = 0;
    while(userdata != NULL){
        count++;
    if (count == 3){
        condition1 = strcmp(username,userdata);
        //printf("username = %s", userdata);
    }
    if (count == 4){
        condition2 = strcmp(password,userdata);
        //printf("password = %s", userdata);
    }
    userdata = strtok(NULL, ","); 
    }
    if (!condition1&&!condition2){
        break;
    }
}
fclose(f1);
if(!condition1&&!condition2){
    printf("Login successful");
}
else{
    printf("Login fail");
}
//printf("%d %d", condition1, condition2);
    return 0;
}