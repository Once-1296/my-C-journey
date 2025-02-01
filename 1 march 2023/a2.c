//assignment 2 code
#include<stdio.h>
#include "a2help.c"
// program name
int main(){
     // start coding
float arr[]={10.0, 87.8, 45.7, 68.9};
int count=sizeof(arr)/sizeof(float);
float av = avg (arr, count);
printf (" average is %.3f", av);
    return 0;
}