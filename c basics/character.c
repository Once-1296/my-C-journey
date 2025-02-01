#include<stdio.h>
// program name
int main(){
     // start coding
    //char data type in c should be used as less as possible in c
    char c,d;
    printf("Enter 2 characters:");
    scanf("%c",&c);
    fflush(stdin); 
    scanf("%c",&d);
    printf("\nCharacter 1: %c",c);
    printf("\nCharacter 2: %c",d);
    //Only one character will get printed if fflush is not used,hence before every character and sometimes even string
    //ie char array ,fflush(stdin) would be needed.hence char should be used in c only when needed
    //this issue is not in c++ but can happen once or twice in avery large program
    return 0;
}