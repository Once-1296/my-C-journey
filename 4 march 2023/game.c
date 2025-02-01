#include<stdio.h>
#include<stdlib.h>
// program name
int main(){
     // start coding

printf("this is level  1 (easy)\n");
int randvalue=rand()%50+1;
int input = 0;
int attempts = 0;
do{
attempts++;
printf("enter your guess\n");
scanf("%d", &input);
if(input==randvalue){
    printf("you guessed the number correctly in %d attempts\n", attempts);
    break;
}
else if(input-randvalue <= 10 && input - randvalue > 0){
    printf("your guess is slightly greater\n");
}
else if(randvalue - input <= 10 && randvalue - input > 0){
    printf("your guess is slightly lesser\n");
}
else if(input>randvalue){
    printf("your guess is greater\n");
}
else if(input<randvalue){
    printf("your guess is lesser\n");
}
if(attempts == 10){
    printf("you are out of attempts please try again");
    break;
}
}while(input != randvalue);
if(input==randvalue){
printf("this is level  2 (normal)\n");
randvalue=rand()%100+1;
input = 0;
attempts = 0;
do{
attempts++;
printf("enter your guess\n");
scanf("%d", &input);
if(input==randvalue){
    printf("you guessed the number correctly in %d attempts\n", attempts);
    break;
}
if(attempts==2){
    if(randvalue%2 == 0){
        printf(" the number is even\n");
    }
    else{
     printf("the number is odd\n");
    }
}
if(attempts == 3){
    if(randvalue%5 == 0){
        printf(" the number is divisible by 5\n");
    }
    else{
     printf("the number is not divisible by 5\n");
    }
    if(randvalue%4 == 0){
        printf(" the number is divisible by 4\n");
    }
    else{
     printf("the number is not divisible by 4\n");
    }
}
if(attempts == 4){
    if(randvalue%3 == 0){
        printf(" the number is divisible by 3\n");
    }
    else{
     printf("the number is not divisible by 3\n");
    }
      if(randvalue%8 == 0){
        printf(" the number is divisible by 8\n");
    }
    else{
     printf("the number is not divisible by 8\n");
    }
}

if(input>randvalue){
    printf("your guess is greater\n");
}
if(input<randvalue){
    printf("your guess is lesser\n");
}
if(attempts == 5){
    printf("you are out of attempts please try again");
    break;
}
}while(input != randvalue);
}
    if(input == randvalue ){
        printf("this is level  3 (hard)\n");
randvalue=rand()%200+1;
input = 0;
attempts = 0;
do{
attempts++;
printf("enter your guess\n");
scanf("%d", &input);
if(input==randvalue){
    printf("you guessed the number correctly in %d attempts\n", attempts);
    break;
}

if(attempts == 1){
    if(randvalue%2 == 0){
        printf(" the number is even\n");
        if(randvalue%4 == 0){
        printf(" the number is divisible by 4\n");
    }
    else{
     printf("the number is not divisible by 4\n");
    }
    if(randvalue%8 == 0){
        printf(" the number is divisible by 8\n");
    }
    else{
     printf("the number is not divisible by 8\n");
    }
    }
    else{
     printf("the number is odd\n");
     if(randvalue%5 == 0){
        printf(" the number is divisible by 5\n");
    }
    else{
     printf("the number is not divisible by 5\n");
    }
    if(randvalue%3 == 0){
        printf(" the number is divisible by 3\n");
    }
    else{
     printf("the number is not divisible by 3\n");
    }
    }

    }
if(input>randvalue){
    printf("your guess is greater\n");
}
if(input<randvalue){
    printf("your guess is lesser\n");
}
if(attempts == 2){
    printf("you are out of attempts please try again");
    break;
}} while(input != randvalue);
    }
 return 0;
 }