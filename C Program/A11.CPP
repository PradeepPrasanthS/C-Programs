#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b;
 clrscr();
 printf("enter two nos:");
 scanf("%d %d",&a,&b);
 a=a+b;
 b=a-b;
 a=a-b;
 printf("\nthe swap no is%d %d",a,b);
 getch();
}

