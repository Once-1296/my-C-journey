#include<stdio.h>
// program name
//rainbow program using if elseif else series(case insensitive, uses or operator)
//take input radius, and calculate area using function call
//create a void function to input int roll no , char array name and float marks and do while loop to print
int main(){
     // start codiing
char ch;
printf("what is the first letter of your favourite rainbow color?\n");
scanf("%c", &ch);
if(ch=='v'||ch=='V'){
    printf("your favourite rainbow color is violet");
}
else if(ch=='i'||ch=='I')
{
    printf("your favourite rainbow color is indigo");
}
else if(ch=='b'||ch=='B')
{
    printf("your favourite rainbow color is blue");
}
else if(ch=='g'||ch=='G')
{
    printf("your favourite rainbow color is green");
}
else if(ch=='y'||ch=='Y')
{
    printf("your favourite rainbow color is yellow");
}
else if(ch=='o'||ch=='O')
{
    printf("your favourite rainbow color is orange");
}
else if(ch=='r'||ch=='R')
{
    printf("your favourite rainbow color is red");
}
else{
printf("enter a valid letter");
}
 return 0;
}