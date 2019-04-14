#include<stdio.h>
#include<conio.h>
main()
{
 float a,b,c=1;
 clrscr();
 printf("enter any no:");
 scanf("%f",&a);
 for(b=a;b>=1;b--)
 {
 c=c*b;
 }
 printf("factorial=%f\n",c);
 getch();
}