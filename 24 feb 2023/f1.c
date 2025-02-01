#include<stdio.h>
int aw();

int main(){
    int num;
    num =  aw();
    printf("hello world %d\n", num);
   
    aw();
    aw();
    
    return 0;
}
int aw(){
    int num2=4;
    int square=num2*num2;
 printf("hello from aw\n");
    return square;
}
