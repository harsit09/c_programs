#include <stdio.h>

void main()
{
    float celsius, farhenheit;

    printf("Enter temperature in Farhenheit: ");
    scanf("%f",&farhenheit);
    celsius=(farhenheit*5/9)-32;
    printf("%f Farhenheit = %f Celsius \n", celsius, farhenheit);
}
