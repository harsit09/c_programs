#include<stdio.h>
int check(char ch);
void main()
{
char ch;

printf("\n Enter a letter from the English alphabet: ");
scanf("%c",&ch);
check(ch);
}

int check(char ch)
{
switch(ch)
{
case 'a':
printf("\n ' %c ' is Vowel",ch);
break;
case 'A':
printf("\n ' %c ' is Vowel",ch);
break;
case 'e':
printf("\n ' %c ' is Vowel",ch);
break;
case 'E':
printf("\n ' %c ' is Vowel",ch);
break;
case 'i':
printf("\n ' %c ' is Vowel",ch);
break;
case 'I':
printf("\n ' %c ' is Vowel",ch);
break;
case 'o':
printf("\n ' %c ' is Vowel",ch);
break;
case 'O':
printf("\n ' %c ' is Vowel",ch);
break;
case 'u':
printf("\n ' %c ' is Vowel",ch);
break;
case 'U':
printf("\n ' %c ' is Vowel",ch);
break;
default:
printf("\n' %c ' is a Consonant",ch);
break;
return 0;

}
}
