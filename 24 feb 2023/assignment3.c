#include <stdio.h>
// program name
int details(char name[20], int rollno, float marks);
int main()
{
    // start coding
    char name[20];
    int rollno;
    float marks;
    int i;

    do
    {
        printf("enter your name, roll no and marks\n");
        scanf("%s %d %f", &name, &rollno, &marks);
        details(name, rollno, marks);
        printf("do you want to continue, if yes enter 1\n");
        scanf("%d", &i);
        printf("ok\n");
    } while (i == 1);
    return 0;
}
int details(char name[20], int rollno, float marks)
{
    printf("you are %s roll no %d with %f marks\n", name, rollno, marks);
    return 0;
}