#include<stdio.h>
#include<conio.h>
void main()
{
 int a[50],b[50],c,d,i,j;
 clrscr();
 printf("\nenter the number of elements in the first array:\n");
 scanf("%d",&c);
 printf("enter the elements\n");
 for(i=0;i<c;i++)
 {
 printf("enter a[%d]:",i);
 scanf("%d",&a[i]);
 }
 printf("enter the number of elements in the second array:\n");
 scanf("%d",&d);
 printf("enter the elements\n");
 for(j=0;j<d;j++)
 {
  printf("enter a[%d]:",j);
  scanf("%d",&b[j]);
 }
 for(i=0;i<c;i++)
 {
  for(j=0;j<d;j++)
  {
  if(b[j]==a[i])
   {
    b[j]=' ';
   }
  }
 }
 for(i=0;i<c;i++)
 {
  printf("%d\t",a[i]);
 }
 for(j=0;j<d;j++)
 {
  if(b[j]==' ')
  continue;
  else
  printf("%d\t",b[j]);
 }
 getch();
}

