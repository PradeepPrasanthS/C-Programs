#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c;
 clrscr();
 printf("enter any 3 nos:");
 scanf("%d%d%d",&a,&b,&c);
 if ((a>b)&&(a>c))
 printf("ais greatest");
 if ((b>a)&&(b>c))
 printf("b is greatest");
 if ((c>a)&&(c>b))
 printf("c is greatest");
 getch();
}

