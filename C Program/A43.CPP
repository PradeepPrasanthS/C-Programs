#include<stdio.h>
#include<conio.h>
main()
{
 int a(int,int),b,c;
 clrscr();
 b=5;
 c=10;
 printf("value of a = %d & value of b = %d before swap\n",b,c);
 a(b,c);
 getch();
}
int a(int b,int c)
{
 b=b+c;
 c=b-c;
 b=b-c;
 printf("\nvalue of a = %d & value of b = %d after swap",b,c);
}
