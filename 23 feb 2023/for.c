#include<stdio.h>
int main()
{
    char name[5][20]={"Ram", "Shyam", "John", "Akbar", "Amar"};
    int rollno[5]={1,2,3,4,5};
    float marks[5]={75.0,78.9,77.8,65.0,81.3};
    int i;
    for(i=0;i<=4;i++)
    {
        printf("%s of roll no %d has got %.1f marks\n", name[i], rollno[i], marks[i]);
    }

    return 0;
}