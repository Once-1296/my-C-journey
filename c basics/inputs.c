#include<stdio.h>
// program name
//basic input
//scanf is used to take input
//syntax:
//scanf("%data_type",&variable_name)
//%d = integer
//%c = character 
//%f = float value
//%lf (only in scanf not printf) = double value(higher precision float value)
int main(){
     // start coding
int age;
double marks;
char c;
char name[20];
printf("Enter your name\n");
gets(name);//gets is used so that spaces are conserved
//if I had used scanf awwab wadekar would not be entered only awwab
printf("Enter your age\n");
scanf("%d",&age);
printf("Enter your marks\n");
scanf("%lf",&marks);
fflush(stdin);
printf("Enter a character\n");
scanf("%c",&c);
printf("\nName: %s",name);
printf("\nAge: %d",age);
printf("\nMarks: %.3f",marks);
printf("\nCharacter entered: %c",c);
    return 0;
}