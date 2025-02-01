#include<stdio.h>
// program name
//rainbow

int main(){
     // start codiing
char c;
printf("enter the the first letter of the color");

scanf("%c",&c);
    
 switch(c)
 {
        case 'v':
        printf("the rainbow color is violet");
        break;
        case 'i':
        printf("the rainbow color is indigo");
        break;
        case 'b':
        printf("the rainbow color is blue");
        break;
        case 'g':
        printf("the rainbow color is green");
        break;
        case 'y':
        printf("the rainbow color is yellow");
        break;
        case 'o':
        printf("the rainbow color is orange");
        break;
        case 'r':
        printf("the rainbow color is red");
        break;
        default:
        printf("enter a valid color");
        break;
    }
    
    return 0;
}