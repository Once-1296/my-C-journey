#include<stdio.h>
float circle_area(float);
int main()
{
float radius, area;
printf("Enter the value of Radius: ");
scanf("%f",&radius);
area=circle_area(radius);
printf("\nArea of the circle: %f",area);
}
float circle_area(float radius)
{
float area;
area=3.14*radius*radius;
return area;
}