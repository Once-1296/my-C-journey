#include<stdio.h>
#include<string.h>
// program name
int main(){
     // start coding
char name[] = "awwab", name2[20], name3[20];
strcpy(name2, name);
printf("%s\n", name2);
strncpy(name3, name, 3);
puts(name3);
    return 0;
}