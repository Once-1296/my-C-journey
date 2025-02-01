#include<stdio.h>
// program name
//for loop 2
//syntax:
//for(variable_initialise;condition;increment/decrement)
//{statements};
int main(){
    // start coding
    //break: it is used to come out of a singluar loop
    //continue: it skips the code written after it in one iteration of the loop
    //goto: jumps out of any number of loops to a specific place 
    //      not recommended to use since it's buggy, only showing an example below
    int a;
    printf("Enter a number:\n");
    scanf("%d",&a);
    //example of break
    for (int i = 2; i < a; i++)
    {
        //if number is not prime, we will break out of the loop as quickly as possible
        //this is because we only need one factor like 2,3,etc to know a number is not prime
        //break helps to reduce the number of unnecessary times the loop has to run
        if (a % i == 0)
        {
            printf("%d is not prime.\n",a);   
            break;     
        }
        if(i==a-1)
        {
            printf("%d is prime.\n",a);
        }
    }
    //example of continue
    for (int i = 2; i <= a; i++)
    {
        //here we use continue so that if any one condition is checked the ones below it are skipped
        //and the next iteration of loop runs
        if(i%2==0&&i%3==0)
        {
            printf("%d is a multiple of 2 and 3.\n",i);
            continue;
        }
        if (i%2==0)
        {
            printf("%d is a multiple of 2.\n",i);
            continue;
        }        
        if (i%3==0)
        {
            printf("%d is a multiple of 3.\n",i);
            continue;
        }
        printf("%d is not a multiple of 2 or 3.\n",i);
    }
    //example of goto
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            printf("\n%d",j);
        }
        goto label;
    }
    //without goto and label the number of times the printf would execute would be a^2 times 
    //with goto it only runs a times
    label:
    return 0;
}