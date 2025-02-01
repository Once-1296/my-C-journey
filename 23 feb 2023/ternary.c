#include<stdio.h>
// program name
//ternary operator

int main(){
     // start codiing
 int age1=41, age2=14, age3=76;
   char person1[15]= {"Yunus"},person2[15]={"Pranav"},person3[15]={"George"};
    age1>18&&age1<60?printf("%s can work\n", person1):printf("%s cannot work\n", person1);
    age2>18&&age2<60?printf("%s can work\n", person2):printf("%s cannot work\n", person2);
    age3>18&&age3<60?printf("%s can work\n", person3):printf("%s cannot work\n", person3);
    return 0;
}