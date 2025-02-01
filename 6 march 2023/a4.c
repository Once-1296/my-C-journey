#include<stdio.h>
#include"help.c"
int func(){
    printf (" hello from func with help of help");
}
// program name
int main(){
     // start coding
help(func);
    return 0;
}