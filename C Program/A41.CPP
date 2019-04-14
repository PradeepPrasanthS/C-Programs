#include<stdio.h>
#include<conio.h>
main()
{
 int a(int);
 int b;
 clrscr();
 printf("enter any no to print the table:\n");
 scanf("%d",&b);
 a(b);
 getch();
}
int a(int b)
{
 int c,i;
 for(i=1;i<=10;i++)
 {
 c=b*i;
 printf("%d * %d = %d\n",b,i,c);
 }
}