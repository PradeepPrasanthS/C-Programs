#include<stdio.h>
#include<conio.h>
main()
{
 clrscr();
 int fahr;
 for(fahr=300;fahr>=0;fahr=fahr-20)
 printf("%d\t%d\n",fahr,5*(fahr-32)/9);
 getch();
 }