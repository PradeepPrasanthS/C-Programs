#include<stdio.h>
#include<conio.h>
#define in 1
#define out 0
main()
{
 clrscr();
 int c,nc,nl,nw,state;
 state=out;
 nc=nl=nw=0;
 while((c=getchar())!=EOF)
 {
 ++nc;
 if(c=='\n')
 ++nl;
 if(c==' '||c=='\n'||c=='\t')
 state=out;
 else if(state==out)
  {
  state=in;
  ++nw;
 }
 }
 printf("%d %d %d\n",nl,nw,nc);
 getch();
}