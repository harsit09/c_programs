#include <stdio.h>


void main()
{
   int a, b,c;
 printf("Enter number a :\n");
    scanf("%d", &a);
 printf("Enter number b :\n");
    scanf("%d", &b);
printf("Enter number c :\n ");
    scanf("%d", &c);

   if(a > b && a > c)
      printf("a is largest ");
   else  if(b > a && b > c)
      printf("b is largest ");
    else  if(c > a && c > b)
      printf("c is largest ");
    else printf("No largest number found");
}
