#include<stdio.h>
// program name
//for loop 1
//syntax:
//for(variable_initialise;condition;increment/decrement)
//{statements};
int main(){
     // start coding
int sum = 0,factorial = 1,n;
printf("Enter number to calculate sum from 1 to n:\n");
scanf("%d",&n);
for (int i = 1; i <= n; i++)
{
    sum+= i;
    //sum+= i means sum becomes sum + i
    //if sum = 1, i=2, sum+=i means sum becomes 1 + 2 = 3
}
printf("\nSum of %d natural numbers is %d",n,sum);
printf("\nEnter number to calculate factorial of:\n");
scanf("%d",&n);
//the following loop initialises from the largest value and decrements it
//since multiplying by 1 is useless i>1 is used so that i = 2 is the last iteration in loop
//if this was summation, we'd use i>=1, so i = 1 is the last iteration
for (int i = n; i > 1; i--)
{
    factorial*=i;
    //factorial*=i means factorial becomes factorial * i
    //if factorial is 4 and i is 3 factorial*=i means factorial becomes 4*3 = 12
}
printf("\nFactorial of %d is %d",n,factorial);
    return 0;
}