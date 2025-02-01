#include<stdio.h>
#include<string.h>
// program name
int main(){
     // start coding
char name[20] = "awwab";
char input[20];
printf("enter name");
gets(input);
if(strcmp(name, input)==0){
    printf ("welcome back");
}
else{
    printf("your name is not valid");
}
printf("%d",strcmp(name, input) );
    return 0;
}