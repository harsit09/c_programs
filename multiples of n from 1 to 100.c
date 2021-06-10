#include<stdio.h>
void main()
{
int i,n;
i=1;
printf("Enter the number whose multiples are to be found: \n");
scanf("%d",&n);
while(i<=100)
{
if(i%n==0)
{printf("%d \t",i);}
i++;
}
}
