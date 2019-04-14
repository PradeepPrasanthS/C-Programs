#include<stdio.h>
#include<conio.h>
main()
{
 int i;
 float area,ci;
 clrscr();
 printf("enter the radius of the cicle:");
 scanf("%d",&i);
 area=3.14*i*i;
 printf("area of the circle:%f",area);
 ci=3.14*2*i;
 printf("\ncircumference of circle:%f",ci);
 getch();
}

