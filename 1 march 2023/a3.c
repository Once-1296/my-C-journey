#include<stdio.h>
// program name
int main(){
     // start coding
char c;
printf("enter a character\n");
scanf("%c", &c);
int i = c;
if(i>64&&i<91){
    printf("the character is in capital\n");
}
else if(i>96&&i<123){
    printf("the character is small \n");
}
else{
    printf("the character is not an alphabet");
}
    return 0;
}