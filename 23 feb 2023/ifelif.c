#include<stdio.h>
// program name
//if elif else
int main()
{
     // start codiing
int age;
printf("Enter your age");
scanf("%d", age);
if (age<60){
   if (age<18){
printf("You cannot work and cannot vote. You are a child.");
   }
else
{
   printf("You can work and can vote. You are an adult.");
}
}
else
{
   printf("You cannot work but can vote.You are a senior citizen.");
}
   return 0;
}