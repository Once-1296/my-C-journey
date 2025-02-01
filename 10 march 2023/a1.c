#include<stdio.h>
// program name
int main(){
     // start coding
     FILE *f1 = fopen("awwab.txt", "w");
     for(int i = 0; i<10;i++){
    fprintf(f1, "%d. hello i am awwab\n",i+1);
     }
char name[100];
fclose(f1);
     fopen("awwab.txt", "r");
   while( fgets(name,1000,f1)){
    printf("%s", name);
   }
fclose(f1);
    return 0;
}