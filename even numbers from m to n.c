#include<stdio.h>
void main()
{
int m,n;
printf("Enter the value of m,n: \n");
scanf("%d%d",&m,&n);
while(m<=n)
{if(m%2==0)
    {printf("%d \t ",m);}
m++;
}
}
