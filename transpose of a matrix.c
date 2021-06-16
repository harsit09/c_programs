#include<stdio.h>
void main()
{int a[50][50],rows,columns,transpose[50][50],i,j;
printf("Enter the number of rows and columns of the matrix: \n");
scanf("%d%d",&rows,&columns);
for(i=0;i<rows;i++)
{printf("Enter the elements of row %d : \n",(i+1));
for(j=0;j<columns;j++)
{scanf("%d",&a[i][j]);}
}
for(i=0;i<rows;i++)
{for(j=0;j<columns;j++)
{transpose[j][i]=a[i][j];}
}
printf("The transpose of the matrix : \n");
for(i=0;i<columns;i++)
{for(j=0;j<rows;j++)
{printf("%d \t",transpose[i][j]);}
printf("\n");}
}
