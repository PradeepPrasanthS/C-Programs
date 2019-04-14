#include<stdio.h>
#include<conio.h>
void main()
{
 FILE *a,*b;
 char c;
 clrscr();
 a=fopen("test.c","w");
 printf("\nenter the conyents for file1(#.end)\n");
 c=getchar();
 while(c!='#')
 {
  fputc(c,a);
  c=getchar();
 }
 rewind(a);
 a=fopen("test.c","r");
 b=fopen("tes.c","w");
 c=fgetc(a);
 while(c!=EOF)
 {
  fputc(c,b);
  c=fgetc(b);
 }
 fclose(a);
 fclose(b);
 b=fopen("tes.c","r");
 c=fgetc(b);
 printf("ente the contents in file 2\n");
 while(c!=EOF)
 {
  putchar(c);
  c=fgetc(b);
 }
 fclose(b);
 getch();
}

