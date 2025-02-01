#include<stdio.h>
int main()
{
    char name[5][20]={"Ram", "Shyam", "John", "Akbar", "Amar"};
    int rollno[5]={1,2,3,4,5};
    float marks[5]={75.0,78.9,77.8,65.0,81.3};
    printf("marks of %s of roll no %d are %.1f\n",name[0], rollno[0],marks[0]);
    printf("marks of %s of roll no %d are %.1f\n",name[1], rollno[1],marks[1]);
    printf("marks of %s of roll no %d are %.1f\n",name[2], rollno[2],marks[2]);
    printf("marks of %s of roll no %d are %.1f\n",name[3], rollno[3],marks[3]);
    printf("marks of %s of roll no %d are %.1f\n",name[4], rollno[4],marks[4]);
    return 0;
}