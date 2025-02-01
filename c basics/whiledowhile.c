#include<stdio.h>
// program name
//while syntax
//while(condition)
//{
//statements
//increment/decrement or some change to condition
//};
//do while syntax
//do
//{statements}
//while(condition);
//the main difference between for loop and while,do while
//is that condition variable is initialised in for loop itself
//but for while,do while it has to be initialised outside
int main(){
     // start coding
int a;
printf("Enter a positive integer:\n ");
scanf("%d",&a);
printf("Counting down from %d\n",a);
//while checks condition, then runs code if condition is true
while (a>0)
{
printf("%d\n",a);
a--;
}
printf("Enter another positive integer:\n ");
scanf("%d",&a);
printf("Counting down from %d\n",a);
//do while always runs code once, then starts checking condition
//Enter a negative integer for both loops to see this
do
{
printf("%d\n",a);
a--;
}while (a>0);

    return 0;
}