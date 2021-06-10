#include<stdio.h>
#include<stdlib.h>
void main()
{
int a[50],largest,smallest,n,swapper,i;
printf("Enter the number of elements in the array:\n");
scanf("%d",&n);
printf("Enter the elements of the array: \n");
for(i=0;i<n;i++)
{scanf("%d",&a[i]);}
largest=0;
smallest=0;
for(i=1;i<n;i++)
{if(a[i]>a[largest])
{largest=i;}
if(a[i]<a[smallest])
{smallest=i;}
}
printf("\n Before interchange: \t");
for(i=0;i<n;i++)
{
    printf("%d \t",a[i]);
}
swapper=a[largest];
a[largest]=a[smallest];
a[smallest]=swapper;
printf("\n After interchange: \t");
for(i=0;i<n;i++)
{
    printf("%d \t",a[i]);
}
}
