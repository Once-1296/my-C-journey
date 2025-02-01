#include<stdio.h>
#include<string.h>
// program name
int main(){
     // start coding
char name[]="AwWab";
printf("before %s\n",name);
strlwr(name);
printf("after %s\n",name);
strupr(name);
printf("lastly %s\n",name);
    return 0;
}