#include<stdio.h>
#include<conio.h>
main()
{
 float a,b=0;
 clrscr();
 for(a=1;a<=10;a++)
 {
  printf("no %1.0f natural no is %1.0f\n",a,a);
  b=b+a;
 }
 printf("the sum is %1.0f",b);
 getch();
}