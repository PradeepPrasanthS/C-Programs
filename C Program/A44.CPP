#include<stdio.h>
#include<conio.h>
void main()
{
 long long int a,fact(long long int);
 clrscr();
 printf("enter number:\n");
 scanf("%lld",&a);
 if(a<0)
 printf("invalid no");
 else
 printf("%lld!=%lld",a,fact(a));
 getch();
}
long long int fact(long long int a)
{
 if(a==0)
 return 1;
 else
 return(a*fact(a-1));
}
