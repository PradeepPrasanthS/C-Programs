#include<stdio.h>
#include<conio.h>
void main()
{
 int b;
 float a,c;
 clrscr();
 printf("enter a no to print the table:");
 scanf("%f",&a);
 for(b=1;b<=20;b++)
 {
 printf("\n%10.0f*%d=%10.0f",a,b,b*a);
 }
 getch();
}

