#include<stdio.h>
// program name
int main(){
     // start coding
char studentname[8][8];
int rollno[8];
float marks[8];
FILE *f1 = fopen("students.txt","a");
for(int i = 0; i<8;i++){
    printf("enter name");
    scanf("%s",studentname[i]);
     printf("enter roll no");
    scanf("%d",rollno[i]);
     printf("enter marks");
    scanf("%f",marks[i]);
    fprintf("%s %d %f",studentname[i],rollno[i],marks[i] );
}
fclose(f1); 
    return 0;
}
