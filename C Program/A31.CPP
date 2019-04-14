#include<stdio.h>
#include<conio.h>
main()
{
 float a[5],b,c;
 clrscr();
 printf("enter elements of array:");
 for(b=0;b<5;b++)
 scanf("%f",&a[b]);
 c=a[0];
 for(b=0;b<5;b++)
 {
  if(c<a[b])
  c=a[b];
 }
 printf("max no =%f",c);
 getch();
}
