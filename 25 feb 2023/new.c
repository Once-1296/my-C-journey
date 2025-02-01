#include<stdio.h>
// program name
int main(){
     // start coding
int i;
int *adressi = i;
char c[20];
int adressc= c;
float f;
int *adressf = &f;
printf("enter your name, roll no and marks\n");
scanf("%s, %d, %.4f", &c, i, f);
printf("your name %s is stored in %x. your roll no %d is stored in %x. your marks %.4f is stored in %x", c, adressc, i, adressi, f, adressf);


    return 0;
}