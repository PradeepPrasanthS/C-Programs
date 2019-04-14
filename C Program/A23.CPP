#include<stdio.h>
#include<conio.h>
main()
{
 int a,b,c;
 clrscr();
 for(a=1;a<=5;a++)
 {
  for(c=4;c>=a;c--)
  printf(" ");
  for(b=1;b<=a;b++)
  printf("*");
  printf("\n");
 }
 getch();
}