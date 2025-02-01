#include<stdio.h>
// program name
void printarr(char name[5][20], int arr[5]);
int main(){
     // start coding
int arr[5];
char name[5][20];
int totalitems=sizeof(arr)/sizeof(int);
void printarr(char name[5][20], int arr[5]);
 return 0;
}
void printarr(char name[5][20], int arr[5]){
for(int i=0;i<5;i++){
printf(" enter name %d and name %d",i,i);
scanf("%s %d",&name[i], &arr[i]);
if(arr[i]<35){
printf("%s has failed",&name[i]);
}
else{
continue;
}
    
}
for(int i=0;i<5;i++){
printf("enter name %d and name %d",i,i);
scanf("%s %d",&name[i], &arr[i]);
if(arr[i]>35){
printf("%s has passed",&name[i]);
}
else{
continue;
}
    
}
    
}
