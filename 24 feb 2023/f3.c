#include<stdio.h>
char aw();

int main(){
    aw();
    printf("hello world\n");
    aw();
    aw();
    return 0;
}
char aw(){
    printf("hello from aw\n");
    return 'w';
}