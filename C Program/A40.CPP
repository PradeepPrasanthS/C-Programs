#include<stdio.h>
#include<conio.h>
main()
{
 int a(int);
 int b;
 clrscr();
 printf("enter any no:\n");
 scanf("%d",&b);
 a(b);
 getch();
}
int a(int b)
{
 float c=1;
 int i;
 for(i=b;i>=1;i--)
 c=c*i;
 printf("factorial of the no is %10.0f",c);
}