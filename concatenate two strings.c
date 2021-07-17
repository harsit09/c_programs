#include<stdio.h>
#include<string.h>
void main()
{
char s1[100],s2[100],s3[100];
int i,j,length;
i=0,j=0,length;
printf("Enter string 1:\n");
gets(s1);
printf("Enter string 2:\n");
gets(s2);
while(s1[i]!='\0')
{s3[j]=s1[i];
i++;
j++;}
i=0;
while(s2[i]!='\0')
{s3[j]=s2[i];
i++;
j++;}
s3[j]='\0';
i=0,length=0;
while(s3[i]!='\0')
{
    length++;
    i++;
}
printf("The concatenated string is: ");
puts(s3);
printf("\n The length of the concatenated string = %d",length);
}
