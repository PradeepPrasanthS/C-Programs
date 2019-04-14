#include<stdio.h>
#include<conio.h>
main()
{
 int a[10][10],b[10][10];
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
 printf("\nmatrix is \n\n");
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  printf("%d\t",a[i][j]);
  printf("\n");
 }
 for(i=0;i<m;i++)
  {
  for(j=0;j<n;j++)
  b[j][i]=a[i][j];
  }
 printf("\ntranspose of the matix is \n\n");
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
  printf("%d\t",b[i][j]);
  printf("\n");
 }
 getch();
}
