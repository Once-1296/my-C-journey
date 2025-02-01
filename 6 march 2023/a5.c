#include<stdio.h>

void printname(int items, int *rolnum,float*mks,  int i){
    printf("name  of roll no %d has %f marks\n",  *(rolnum+i),*(mks +i));
    
    if(i < items){
        printname(items, rolnum,mks, i + 1 );
    }
}
// program name
int main(){
     // start coding
    // char name[5][20]={"Ram", "Shyam", "John", "Akbar", "Amar"};
    // char *address = & name[0][20];
    int rollno[5]={1,2,3,4,5};
    int *addressi = & rollno[0];
    float marks[5]={75.0,78.9,77.8,65.0,81.3};
    float *addressf= & marks[0];
    int count = sizeof(rollno)/sizeof(int);
    printname(count,addressi,addressf,0);
    return 0;
}
