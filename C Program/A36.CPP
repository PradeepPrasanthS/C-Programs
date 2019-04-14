#include<stdio.h>
#include<conio.h>
main()
{
 int i,*a[5],b;
 clrscr();
 printf("enter the elements for the array:\n");
 for(i=0;i<5;i++)
 scanf("%d",&*a[i]);
 b=*a[0];
 for(i=1;i<5;i++)
 {
  if(b<*a[i])
  b=*a[i];
 }
 printf("\nmaximum no = %d\n",b);
 getch();
}
