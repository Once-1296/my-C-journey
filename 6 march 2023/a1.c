#include <stdio.h>
void hq(float *data, int count){
   
    for (int i = 0; i < count; ++i)
         printf( "element %d: %f \n", i,  *(data + i));
        }
int main() {
 
     float  arr[]= { 1.2, 3.14, 4.32, 4.6, 2.9};
     int items = sizeof(arr)/sizeof(float);
    float *address = & arr[0];
    hq(address, items);
    return 0;
}