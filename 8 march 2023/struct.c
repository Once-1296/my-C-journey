#include <stdio.h>
//program name
struct student {
    char firstName[50];
    char lastName[50];
    int roll;
    float marks;
} s[5];

int main() {
    //start coding
    int i;
    printf("Enter information of students:\n");

    // storing information
    for (i = 0; i < 5; ++i) {
       
        printf("Enter first name: ");
        scanf("%s", &s[i].firstName);
        printf("Enter last name: ");
        scanf("%s", &s[i].lastName);
        printf("Enter roll no: ");
        scanf("%d", &s[i].roll);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }
    printf("Displaying Information:\n\n");

    // displaying information
    for (i = 0; i < 5; ++i) {
        printf("data list %d", i + 1);
        printf("First name: ");
        puts(s[i].firstName);
        printf("Last name: ");
        puts(s[i].lastName);
        printf("Roll no : %d ", s[i].roll);
        printf("Marks: %.1f", s[i].marks);
        printf("\n");
    }
    return 0;
}
