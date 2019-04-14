#include<stdio.h>
#include<conio.h>
main()
{
 int a(int);
 int b,c;
 clrscr();
 printf("enter any no:\n");
 scanf("%d",&b);
 c=a(b);
 getch();
}
int a(int b)
{
 int c;
 c=b*b;
 printf("the square of the no is %d",c);
}