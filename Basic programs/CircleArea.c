#include <stdio.h>

int main()
{
    float radius;
    float area;
    float pi;
    pi = 3.14;
    printf("Enter the radius of the circle: \n");
    scanf ("%f", &radius);
    area = pi*radius*radius;
    printf ("Area of circle with radius %f is %f ",radius, area);
    return 0;
}