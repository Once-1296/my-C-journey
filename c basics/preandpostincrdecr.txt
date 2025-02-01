#include<stdio.h>
// program name
//difference between pre and post increment/decrement
int main(){
     // start coding
    int a = 5, b = 5;
    //in pre increment/decrement the value is changed before executing the line of code in which increment/decrement is there
    printf("Pre increment:%d \n",++a);
    //in post increment/decrement the value is changed after executing the line of code in which increment/decrement is there
    //but before the next line of code
    printf("Post increment:%d \n",b++); 
    printf("Post increment next line:%d\n",b); 
    return 0;
}