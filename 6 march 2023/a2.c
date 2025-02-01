#include <stdio.h>
void hq(char *arr, int count){
   
    for (int i = 0; i < count; ++i)
         printf( "element %d: %c \n", i,  *(arr + i));
        }
int main() {
 
    char data[]= {'a', 'w', 'w', 'a', 'b'};
     int items = sizeof(data)/sizeof(char);
    char *address = & data[0];
    hq(address, items);
    return 0;
}