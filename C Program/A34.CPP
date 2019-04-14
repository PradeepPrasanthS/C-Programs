#include<stdio.h>
#include<conio.h>
main()
{
 int a[10][10],b[10][10],c[10][10];
 int i,j,m,n;
 clrscr();
 printf("enter the order matix:\n");
 scanf("%d%d",&m,&n);
 printf("\nenter value for a matrix:\n\n");
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  scanf("%d",&a[i][j]);
 }
 printf("\nenter value for b matrix:\n\n");
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  scanf("%d",&b[i][j]);
 }
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  c[i][j]=a[i][j]+b[i][j];
 }
 printf("sum of matrix is\n\n");
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
   printf("%d\t",c[i][j]);
  }
  printf("\n\n");
 }
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  c[i][j]=a[i][j]-b[i][j];
 }
 printf("subtraction of matrix is\n\n");
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
   printf("%d\t",c[i][j]);
  }
  printf("\n\n");
 }
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  c[i][j]=a[i][j]*b[i][j];
 }
 printf("mutipilcation of matix is\n\n");
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
   printf("%d\t",c[i][j]);
  }
 printf("\n\n");
 }
 getch();
}
