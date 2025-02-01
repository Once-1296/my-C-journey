#include<stdio.h>
// program name
int main(){
     // start coding
FILE *f1 = fopen("details.c", "a");
char ans;
char name[20];
do{
    fprintf(f1, "enter your name:");
    fscanf("%s", name);
    fprintf(f1,"hello %s", name);
    fprintf(f1, "would you like to continue ");
    fscanf("%c", ans);

}while(ans=='y'||ans=='Y');
fclose(f1);
    return 0;
}