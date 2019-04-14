#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b;
 float x,y;
 clrscr();
 printf("\nenter the valuesof x & a:");
 scanf("%f%d",&x,&a);
 y=1.0;
 b=1;
 while(b<=a)
 {
  y=y*x;
  b++;
 }
 printf("x=%f;a=%d;x to power a=%f",x,a,y");
 getch();
}

