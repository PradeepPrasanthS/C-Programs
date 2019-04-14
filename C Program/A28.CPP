#include<stdio.h>
#include<conio.h>
main()
{
 int a,b,c;
 clrscr();
 printf("enter any two nos:");
 scanf("%d %d",&a,&b);
 c=a&b;
 printf("\nthe answer after ANDing is =%d",c);
 c=a|b;
 printf("\nthe answer after ORing is =%d",c);
 c=a^b;
 printf("\nthe answer after NOTing is =%d",c);
 c=~a;
 printf("\nthe answer after COMPLEMENT is =%d",c);
 c=a<<2;
 printf("\nthe answer after left shift is =%d",c);
 c=a>>2;
 printf("\nthe answer after right shift is =%d",c);
 getch();
}
