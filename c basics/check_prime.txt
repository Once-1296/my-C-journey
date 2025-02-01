#include <stdio.h>
int check_prime(int num);
// program name
int main()
{
    // start coding
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    //1 means true and hence if block executes
    //0 means false and hence else block executes
    if (check_prime(num))
    {
        printf("%d is prime.", num);
    }
    else
    {
        printf("%d is not prime.", num);
    }
    return 0;
}
int check_prime(int num)
{
    //after a return statement is executed that function stops and main function begins
    if (num < 2)
    {
        //1 and 0 are not prime so remove them immediately
        return 0;
    }
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                //num % i == 0 means num is perfectly divisible by i, that is remainder is zero
                return 0;
            }
        }
    //at end all conditions are checked for non primes , so number can only be prime now
    return 1;
}