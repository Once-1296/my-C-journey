#include<stdio.h>
// program name
void totalvalue();
void avg();
void min();
void max();
int main(){
     // start coding
int arr[]={1,3,7,14,13,43};
int totalitem=sizeof(arr)/sizeof(int);
for(int j=0;j<totalitem;j++){
    printf("%d \n", arr[j]);
}
printf("total no of values are %d\n",totalitem );
totalvalue();
avg();
min();
max();    
return 0;
}
void totalvalue(){
int arr[]={1,3,7,14,13,43};
int totalitem=sizeof(arr)/sizeof(int);
int total;
for(int i=0;i<totalitem;i++){
    total+=arr[i];
}
printf("total is %d\n", total);
}
void avg(){
int arr[]={1,3,7,14,13,43};
int totalitem=sizeof(arr)/sizeof(int);
int total=0;
for(int i=0;i<totalitem;i++){
    total+=arr[i];
}

float avg = total/totalitem;
printf("average is %.2f\n", avg);
}
void min(){
    int arr[]={1,3,7,14,13,43,};
    int totalitem=sizeof(arr)/sizeof(int);
    int min=arr[0];
    for(int i=0;i<totalitem;i++){
      if(arr[i]>=min){
       
        continue;
      }
        else{
            min=arr[i];
            continue;
        }
    }
 printf("Minimum value is %d\n", min);
}
void max(){
    int arr[]={1,3,7,14,13,43};
    int totalitem=sizeof(arr)/sizeof(int);
    int max=arr[0];
    for(int i=0;i<totalitem;i++){
       if(arr[i]>=max){
        max=arr[i];
        continue;
       }
        else{
            continue;
        }
    }
 printf("Maximum value is %d\n", max);
}