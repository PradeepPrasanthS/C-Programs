#include<stdio.h>
#include<conio.h>
main()
{
 int a(int,int);
 int b,c;
 clrscr();
 printf("enter any no:\n");
 scanf("%d%d",&b,&c);
 a(b,c);
 getch();
}
int a(int b,int c)
{
 b=b+c;
 c=b-c;
 b=b-c;
 printf("after swapping the value is %d %d",b,c);
}