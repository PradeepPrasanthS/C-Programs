#include<stdio.h>
#include<conio.h>
main()
{
 int a,b,c=0;
 clrscr();
 printf("enter any no:");
 scanf("%d",&a);
 for(b=1;b<a;b=b+2)
 {
 printf("%d +",b);
 c=c+b;
 }
 printf("%d",a);
 printf("\nsum =%d",c+a);
 getch();
}
