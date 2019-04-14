#include<stdio.h>
#include<conio.h>
void main()
{
 char a;
 clrscr();
 printf("enter m fr mon\nt fr tue\nw fr wed\nh fr thurs\nf fr fri\ns fr sat\nu fr sun:");
 scanf("%c",&a);
 switch(a)
 {
  case'm':
  case'M':
  printf("monday");
  break;
  case't':
  case'T':
  printf("tuseday");
  break;
  case'w':
  case'W':
  printf("wednesday");
  break;
  case'h':
  case'H':
  printf("thursday");
  break;
  case'f':
  case'F':
  printf("friday");
  break;
  case's':
  case'S':
  printf("saturday");
  break;
  case'u':
  case'U':
  printf("sunday");
  break;
  default:
  printf("wrong input");
  }
 getch();
}

