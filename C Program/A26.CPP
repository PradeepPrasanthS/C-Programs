#include<stdio.h>
#include<conio.h>
main()
{
 int a,b,c=1;
 clrscr();
 printf("enter any no:");
 scanf("%d",&a);
 for(b=1;b<=a-1;b++)
 printf("1/%d +",b);
 printf("1/%d",a);
 for(b=1;b<=a;b++)
 c=c+b;
 printf("\nc=1/%d",c);
 getch();
}