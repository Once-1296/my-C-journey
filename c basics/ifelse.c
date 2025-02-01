#include <stdio.h>
// program name
// conditional statements
// if,else, else if
// inside if () or else if(), we have conditions as follows
// a > b greater than
// a < b lesser than
// a >= b greater than or equal to
// a <= b lesser than or equal to
// a == b equal to
// a != b not equal to
// these conditions can be combined using &&(and),||(or) and modified by !(not operator)
// additionally we can take int values as condition as well
// if(int_ value)
// int_value = 0 then condition is false else it's true
int main()
{
    // start coding
    int a, b;
    printf("Enter 2 numbers a and b: ");
    scanf("%d%d",&a,&b);
    if (a > b)
    {
        printf("\na is greater than b");
    }
    else if (a == b)
    {
        printf("\na is equal to b");
    }
    else
    {
        printf("\na is lesser than b");
    }
    //a%2 returns remainder when a is divided by 2. When it is 0 the number is even
    if(a%2==0 && b%2 == 0)
    {
        printf("\nBoth a and b are even");
    }
    else if(!(a%2==0 || b%2 == 0))
    {
        printf("\nBoth a and b are odd");       
    }
    else if(a%2==0 && !b%2 == 0)
    {
        printf("\na is even and b is odd");
    }    
    else if(!a%2==0 && b%2 == 0)
    {
        printf("\na is odd and b is even");
    }
    return 0;
}