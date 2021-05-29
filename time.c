 #include<stdio.h>

int minutes(int a,int b)
{
return (60*a)+b;
}

void main()
{
int a,b,result;

printf("\n Enter the number of hours and minutes ");
scanf("%d %d",&a,&b);
result=minutes(a,b);
printf("\n Total Number of Minutes: %d",result);
}
