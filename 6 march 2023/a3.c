#include <stdio.h>
void hq(int *arr, int count){
   
    for (int i = 0; i < count; ++i)
         printf( "element %d: %d \n", i,  *(arr + i));
        }
int main() {
 
     int data[]= { 1, 3, 4, 2, 5};
     int items = sizeof(data)/sizeof(int);
    int *address = & data[0];
    hq(address, items);
    return 0;
}