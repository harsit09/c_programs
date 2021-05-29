#include<stdio.h>
#include<stdlib.h>
int a ,b ,c,s;
float h;

void main()
{printf("enter the sides of the triangle :");
scanf("%d%d%d",&a,&b,&c);
s = (a+b+c)/2;
h = sqrt(s*(s-a)*(s-b)*(s-c));
printf("The area of triangle is =%f \n",h);
}

