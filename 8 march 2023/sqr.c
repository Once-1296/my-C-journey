#include<stdio.h>
int square(int num){
    long long sqr = num*num;
    return sqr;
}
// program name
int main(){
     // start coding
int input;
printf("Enter number: ");
scanf("%d", &input);
long long sq = square(input);
printf("Square of %d is %lld", input, sq);
    return 0;
}