#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
void main()
{
 char a[100];
 int b=0,c=0,d=0,e=0,f,i;
 clrscr();
 printf("\nenter the statement:\n");
 gets(a);
 f=strlen(a);
 for(i=0;i<f;i++)
 {
  if(isalpha(a[i]))
  {
   if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
   {
    b++;
   }
   else
   {
    c++;
   }
  }
  if(isspace(a[i]))
  {
   d++;
  }
  if(ispunct(a[i]))
  {
   e++;
  }
 }
 printf("\nno words=%d",d+1);
 printf("\nno of vowels=%d",b);
 printf("\nno of consonants=%d",c);
 printf("\nno of space=%d",d);
 printf("\nno of special characters=%d",e);
 getch();
}

