#include <stdio.h>
#include <math.h>
float area_of_triangle(float,float,float);
void main()
{float a, b, c, area;
printf("Enter the lengths of sides of a triangle\n");
scanf("%f%f%f", &a, &b, &c);
area = area_of_triangle(a, b, c);
printf("Area of the triangle = %f\n", area);
}
float area_of_triangle(float a, float b, float c)
{  float s, area;
  s = (a+b+c)/2;
  area = sqrt(s*(s-a)*(s-b)*(s-c));
  return area;
}
