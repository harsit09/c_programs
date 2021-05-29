#include<stdio.h>
#include<math.h>
int smallest(int,int,int);
void main()
{
int a,b,c,answer;
printf("Enter three numbers to find the smallest among them:\n");
scanf("%d%d%d",&a,&b,&c);
answer=smallest(a,b,c);
if(answer!=0)
{printf("The smallest of the three numbers is %d \n",answer);}
else
    {printf("There is no smallest number");}
}
int smallest(int x,int y,int z)
{int s;
if(x<y && x<z)
{return x;}
if(y<z && y<x)
{return y;}
if(z<x && z<y)
{return z;}
else
{return 0;}
}
