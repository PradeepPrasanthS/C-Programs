#include<stdio.h>
#include<conio.h>
main()
{
 int a[10],b,c=0;
 float d;
 clrscr();
 printf("enter elements of array:");
 for(b=1;b<=10;b++)
 scanf("%d",&a[b]);
 for(b=1;b<=10;b++)
 c=c+a[b];
 printf("sum=%d",c);
 d=c/10;
 printf("average=%.2f",d);
 getch();
}
