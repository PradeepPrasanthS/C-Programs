#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c;
 clrscr();
 printf("enter two nos:");
 scanf("%d %d",&a,&b);
 c=a;
 a=b;
 b=c;
 printf("\nthe swap no is%d %d",a,b);
 getch();
}

