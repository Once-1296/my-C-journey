#include<stdio.h>
// program name
//array is a group of elements of similar data type
//it uses contigous memory
//it means that the elements are placed next to each other in memory
//for example if 1st element has address 000010
//the next element has address 000014
//(since integer data type occupies 4 bytes)
//we will see this in detail in pointers
int main(){
     // start coding
     int arr[10];

for(int i = 0;i < sizeof(arr)/sizeof(int); i++)
{
    printf("Enter element %d:\n" ,i+1);
    scanf("%d",&arr[i]);
}
//to get number of elements in an array,
//divide sizeof(array_name) by sizeof(data_type)
for(int i = 0;i < sizeof(arr)/sizeof(int); i++)
{
    printf("Element %d:%d\n" ,i+1,arr[i]);
}
//using pointers to traverse array, will see later
// int *arrptr;
// int i = 0;
// arrptr = &arr[0];
// while (i<sizeof(arr)/sizeof(int))
// {
// printf("Element %d:%d\n",i+1,*(arrptr+i));
// i++;
// }

    return 0;
}