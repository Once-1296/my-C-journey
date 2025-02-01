#include<stdio.h>
// program name
//ternary operator -> ?:
// syntax
//condition?code_for_true_condition:code_if_false
int main(){
     // start coding
    int a,b;
    printf("Enter 2 numbers:\n");
    scanf("%d%d",&a,&b);
    a>b?printf("%d is greater than %d",a,b):printf("%d is lesser than %d",a,b);
    return 0;
}