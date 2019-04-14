#include<stdio.h>
#include<conio.h>
main()
{
 float a=1,b=1,c=0,d;
 clrscr();
 printf("%10.0f\n%10.0f\n",a,b);
 for(d=0;d<=20;d++)
 {
 c=a+b;
 printf("%10.0f\n",c);
 a=b;
 b=c;
 }
 getch();
}