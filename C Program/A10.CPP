#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c=0;
 clrscr();
 printf("enter the no:");
 scanf("%d",&a);
 while(a>=1)
 {
 b=a%10;
 c=c*10+b;
 a=a/10;
 }
 printf("\nthe reversed no is%d",c);
 getch();
}

