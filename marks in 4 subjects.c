#include<stdio.h>
void main()
{
int marks[4][3],highest[4],i,j;
for(i=0;i<4;i++)
{printf("Enter marks in subject %d : \n ",(i+1));
for(j=0;j<3;j++)
{scanf("%d",&marks[i][j]);}
}
for(i=0;i<4;i++)
{highest[i]=marks[i][0];
for(j=1;j<3;j++)
{if(marks[i][j]>highest[i])
{highest[i]=marks[i][j];}
}
}
for(i=0;i<4;i++)
{printf("Highest marks in subject %d = %d \n",i,highest[i]);}
}

