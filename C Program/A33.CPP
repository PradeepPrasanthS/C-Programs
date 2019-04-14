#include<stdio.h>
#include<conio.h>
main()
{
 int a[10][10],b[10][10];
 int i,j,m,n;
 clrscr();
 printf("enter the order matix:");
 scanf("%d%d",&m,&n);
 printf("enter value for a matrix:");
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  scanf("%d",&a[i][j]);
 }
 printf("enter value for b matrix:");
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  scanf("%d",&b[i][j]);
 }
 printf("\n A matix is\n\n");
 for(i=0;i<m;i++)
 {
   for(j=0;j<n;j++)
  {
   printf("%d\t",a[i][j]);
  }
  printf("\n\n");
 }
 printf("\nB matix is\n\n");
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
   printf("%d\t",b[i][j]);
  }
  printf("\n\n");
 }
 getch();
}
