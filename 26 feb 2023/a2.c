#include<stdio.h>
// program name
void changevariable(float marks, float *address);
int main(){
     // start coding
float marks=79.23;
float * address;
printf("marks before %.2f\n", marks);
changevariable(marks, address);
    return 0;
}

void changevariable(float marks, float *address){
address=&marks;
printf("enter new marks");
scanf("%f", address);
printf("marks after %.2f", marks);
}