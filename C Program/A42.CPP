#include<stdio.h>
#include<conio.h>
main()
{
 int a(int,int),b,c,*d,*e,f,g;
 clrscr();
 b=5;
 c=10;
 d=&b;
 e=&c;
 f=*d;
 g=*e;
 printf("value of a = %d & value of b = %d before swap\n",*d,*e);
 a(f,g);
 getch();
}
int a(int f,int g)
{
 f=f+g;
 g=f-g;
 f=f-g;
 printf("\nvalue of a = %d & value of b = %d after swap",f,g);
}
