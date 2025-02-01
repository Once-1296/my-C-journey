#include<stdio.h>
int main()
{
    int age1, age2;
   char person1[15]= {"Yunus\0"};
    char person2[15]={"Pranav\0"};
    age1=41;
    age2=14;
    if(age1>18){
        printf("%s can vote.\n", person1 );
    }
    else{
        printf("%s cannot vote.\n", person1);
    }
    if(age2>18){
        printf("%s can vote.\n", person2);
    }
    else{
        printf("%s cannot vote.\n", person2);  
    }
    return 0;
}