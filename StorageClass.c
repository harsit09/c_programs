#include <stdio.h>  
int main()  
{  
int a; //auto  
char b;  
float c;   
printf("%d %c %f",a,b,c); // printing initial default value of automatic variables a, b, and c.   
return 0;  
}  

#include <stdio.h>  
int main()  
{  
int a = 10,i;   
printf("%d ",++a);  
{  
int a = 20;   
for (i=0;i<3;i++)  
{  
printf("%d ",a); // 20 will be printed 3 times since it is the local value of a  
}  
}  
printf("%d ",a); // 11 will be printed since the scope of a = 20 is ended.   
}  


#include<stdio.h>  
static char c;  
static int i;  
static float f;   
static char s[100];  
void main ()  
{  
printf("%d %d %f %s",c,i,f); // the initial default value of c, i, and f will be printed.   
}  
