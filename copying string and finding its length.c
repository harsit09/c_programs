#include<stdio.h>
#include<string.h>
void main()
{
char s1[100],s2[100];
int i,l;
i=0;
printf("Enter a string: \n");
gets(s1);
while(s1[i]!='\0')
{s2[i]=s1[i];
i++;}
s2[i]='\0';
l=0,i=0;
while(s2[i]!='\0')
{l++;
i++;}
printf("The copied string is :");
puts(s2);
printf("\n The length of the copied string = %d",l);
}
