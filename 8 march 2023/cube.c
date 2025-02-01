#include<stdio.h>
int cube(int num){
    long long cub = num*num*num;
    return cub;
}
// program name
int main(){
     // start coding
int input;
printf("Enter number: ");
scanf("%d", &input);
long long cb = cube(input);
printf("cube of %d is %lld", input, cb);
    return 0;
}