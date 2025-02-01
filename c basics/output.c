#include<stdio.h>
// program name
//basic output
//printf is used to give output
//syntax:
//printf("%data_type",variable_name)
//strings are in " ", characters are in ' '
int main(){
     // start coding
     //\n indicates new line
    printf("This is an integer: %d\n", 5);
    printf("This is a character: %c\n", 'a');
    printf("This is a float value: %f\n", 5.09);
    printf("This is a float value till first digit: %.1f\n", 5.456);
    printf("This is a double value till second digit: %.2f\n", 5.456);
    printf("This is a string: %s\n", "awwab");
    return 0;
}