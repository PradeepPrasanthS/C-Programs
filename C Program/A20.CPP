#include<stdio.h>
#include<conio.h>
void main()
{
 int c,e;
 float a,b,d;
 clrscr();
 printf("enter any 2 nos:");
 scanf("%f%f",&a,&b);
 printf("enter 1 fr add\n2 fr mul\n3 fr sub\n4 fr div:");
 scanf("%d",&c);
 switch(c)
 {
  case 1:
  d=a+b;
  printf("the sum is %5f",d);
  break;
  case 2:
  d=a*b;
  printf("the mul is %5f",d);
  break;
  case 3:
  d=a-b;
  printf("the sub is %5f",d);
  break;
  case 4:
  d=a/b;
  printf("the div is %5f",d);
  break;
  default:
  printf("wrong input");
  }
 getch();
}

