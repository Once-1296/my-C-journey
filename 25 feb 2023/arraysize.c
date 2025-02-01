#include<stdio.h>
// program name
int arr1(int record1[12], int totalitems1){
record1[12] =(2, 4, 3, 5, 6, 7, 8, 3, 5, 10, 87, 67);
totalitems1=sizeof(record1[12])/sizeof(int);
return totalitems1;
}
int arr2(char record2[9], int totalitems2){
record2[9] = ("awwab", "mazgaon", "bharat", "good", "whatever", "haha", "power", "exponential", "excellent");
totalitems2=sizeof(record2[9])/sizeof(char);
return totalitems2;
}
int arr3(float record3[12], int totalitems3){
record3[12]=(2.8, 4.6, 3.14, 5.5, 6.66, 7.86, 8.99, 3.142, 5.7, 10.6, 87.987, 96.024);
totalitems3=sizeof(record3[12])/sizeof(float);
return totalitems3;
}

int main(){
     // start coding
     int size1, size2, size3;
     int record1[12], totalitems1,record3[12],  totalitems3, record2[9], totalitems2;
size1 = arr1( record1[12], totalitems1 );
size2 = arr2( record2[9], totalitems2);
size3 = arr3( record3[12],  totalitems3);
printf("%d %d %d", size1, size2, size3);

    return 0;
}