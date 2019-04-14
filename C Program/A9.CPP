#include<stdio.h>
#include<conio.h>
main()
{
 int s1,s2,s3,s4,s5,sum;
 float per;
 clrscr();
 printf("enter the subject marks:");
 scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
 sum=s1+s2+s3+s4+s5;
 printf("the sum is%d",sum);
 per=sum*100/500;
 printf("\nper is%f",per);
 getch();
}

