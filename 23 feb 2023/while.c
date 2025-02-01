#include<stdio.h>
// program name
//while

int main(){
   //start codiing
   int i=1;
   while(i<=10){
    printf("Square of %d is %d\n", i, i*i);
    i++;
   }
   i=1;
   do{
    printf("Cube of %d is %d\n", i, i*i*i);
    i++;
   }while(i<=5);

    return 0;
}