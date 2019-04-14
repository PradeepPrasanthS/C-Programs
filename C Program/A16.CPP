#include<stdio.h>
#include<conio.h>
void main()
{
 int a;
 clrscr();
 printf("enter any year:");
 scanf("%d",&a);
 if (a%4==0)
 printf("year is a leap year");
 else
 printf("year is not a leap year");
 getch();
}

