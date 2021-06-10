#include<stdio.h>
void main()
{int n,a[50],sum,i;
float avg;
sum=0;
printf("Enter the number of numbers of which you want to find the average: \n");
scanf("%d",&n);
printf("Enter the numbers: \n");
for(i=0;i<n;i++)
{scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{sum=sum+a[i];
}
avg=(float)sum/n;
printf("The average = %f",avg);
}
