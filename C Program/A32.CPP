#include<stdio.h>
#include<conio.h>
main()
{
 int a[3][2],b[3][2],i,j;
 clrscr();
 printf("enter value for a matrix:");
 for(i=0;i<3;i++)
 {
  for(j=0;j<2;j++)
  scanf("%d",&a[i][j]);
 }
 printf("enter value for b matrix:");
 for(i=0;i<3;i++)
 {
  for(j=0;j<2;j++)
  scanf("%d",&b[i][j]);
 }
 printf("\n A matix is\n\n");
 for(i=0;i<3;i++)
 {
  for(j=0;j<2;j++)
  {
   printf("%d\t",a[i][j]);
  }
  printf("\n");
 }
 printf("\nB matix is\n\n");
 for(i=0;i<3;i++)
 {
  for(j=0;j<2;j++)
  {
   printf("%d\t",b[i][j]);
  }
  printf("\n");
 }
 getch();
}
