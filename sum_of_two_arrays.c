#include<stdio.h>
void main()
{
int a[50][50],b[50][50],sum[50][50],rows1,rows2,cols1,cols2,i,j;
printf("Enter the number of rows and columns of array 1: \n");
scanf("%d%d",&rows1,&cols1);
for(i=0;i<rows1;i++)
{printf("Enter the elements of row %d: \n",(i+1));
for(j=0;j<cols1;j++)
{scanf("%d",&a[i][j]);}
}
printf("Enter the number of rows and columns of array 2: \n");
scanf("%d%d",&rows2,&cols2);
for(i=0;i<rows2;i++)
{printf("Enter the elements of row %d : \n",(i+1));
for(j=0;j<cols2;j++)
{scanf("%d",&b[i][j]);}
}
if(rows1!=rows2 && cols1!=cols2)
{printf("The two matrices need to have equal number of rows and columns to add! \n");
exit(0);}
else
{
for(i=0;i<rows1;i++)
{ sum[i][j]=0;
for(j=0;j<cols1;j++)
{sum[i][j]= a[i][j]+b[i][j];}
}
printf("The sum of the two arrays is as follows: \n");
for(i=0;i<rows1;i++)
{for(j=0;j<cols1;j++)
{printf("%d \t",sum[i][j]);
}
printf("\n");}
}
}

