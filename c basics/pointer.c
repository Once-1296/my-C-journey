#include<stdio.h>
// program name
int main(){
     // start coding
     int arr[10];

for(int i = 0;i < sizeof(arr)/sizeof(int); i++)
{
    printf("Enter element %d:\n" ,i+1);
    scanf("%d",&arr[i]);
}
// using pointers to traverse array
int *arrptr;
int i = 0;
arrptr = &arr[0];
while (i<sizeof(arr)/sizeof(int))
{
printf("Element %d:%d\n",i+1,*(arrptr+i));
i++;
}
//suppose arr[0] is in memory 000034
//arr[1] will be in 000036, since size of integer is 2 bytes
//initially arrptr is actually 000034
//at each step we add 1 to it, but actually it becomes 000036,000040,etc
//then *(000034) will give arr[0],*(000036) will give arr[1],*(000038) will give arr[2] and so on 
    return 0;
}