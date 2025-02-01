#include<stdio.h>
// program name
int main(){
     // start coding
    char option;
    int a,b;
    printf("Enter 2 numbers: ");
    scanf("%d%d",&a,&b);
    fflush(stdin);
    printf("\n  addition -> + \n  subtraction -> - \n  multiplication -> * \n  division(with remainder) -> /\n");
    scanf("%c",&option);
    switch (option)
    {
    case '+':
       printf("\nSum of %d and %d is %d",a,b,a+b);
        break;
    case '-':
       printf("\nDifference between %d and %d is %d",a,b,a-b);
        break;
    case '*':
       printf("\nProduct of %d and %d is %d",a,b,a*b);
        break;
    case '/':
       printf("\nDivisor of %d and %d is %d. Remainder is %d",a,b,a/b,a%b);
        break; 
    default:
    printf("\nEnter valid character operator.");
        break;
        //break is there so only one case runs
    }
    return 0;
}