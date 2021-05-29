#include<stdio.h>
#include<stdlib.h>
float average(int,int,int);
void main()
{int x,y,z;
float answer;
printf("Enter three numbers to find their average:\n");
scanf("%d%d%d",&x,&y,&z);
answer=average(x,y,z);
printf("AVERAGE: %f",answer);
}
float average(int a, int b,int c)
{float av;
av=(a+b+c)/3.0;
return av;
}
