#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int getcount();
int totalvalue(int count, int arr[count] );
int avg(int count, int arr[count] );
int min(int count, int arr[count] );
int max(int count, int arr[count] );
int main (){
char line[10];
int arr[getcount()];
int size = sizeof(arr)/sizeof(int);
printf("size = %d items\n", size);
FILE *f1 = fopen("num.txt", "r");
int count = 0;
while(fgets(line,10, f1)){
        arr[count] = atoi(line);
        count++;
        printf("%s\n",line );
}
printf("count = %d\n", count);
fclose(f1);
int sum = totalvalue(count, arr);
int average = avg(count, arr);
int minimum = min(count, arr);
int maximum = max(count, arr);
printf("total = %d\naverage = %d\nminimum = %d\nmaximum = %d\n ", sum, average, minimum, maximum);
return 0;
}
int getcount(){
    char line[10];
int num1 = 20;

FILE *f1 = fopen("num.txt", "r");
int count = 0;
while(fgets(line,100, f1)){
        count++;
        printf("%s\n",line );
}
printf("count = %d\n", count);
fclose(f1);
return count;
}
int totalvalue(int count, int arr[count] ){
int total = 0;
for(int i=0;i<count;i++){
    total+=arr[i];
}
return total;
}
int avg(int count, int arr[count] ){

int total=0;
for(int i=0;i<count;i++){
    total+=arr[i];
}

float avg = total/ count;
return avg;
}
int min(int count, int arr[count] ){
  
    int min=arr[0];
    for(int i=0;i<count;i++){
      if(arr[i]>=min){
       
        continue;
      }
        else{
            min=arr[i];
            continue;
        }
    }
return min;
}
int max(int count, int arr[count] ){
 
    int max=arr[0];
    for(int i=0;i<count;i++){
       if(arr[i]>=max){
        max=arr[i];
        continue;
       }
        else{
            continue;
        }
    }
 return max;
}