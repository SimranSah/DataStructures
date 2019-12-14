#include<stdio.h>
#include<conio.h>
main()
{
 char name[]="SIMRAN SAH";
 int i=0;
 clrscr();
 while(name[i]!='\0')
 {
  printf("%c",name[i]);
  i++;
  }
 getch();
 return 0;
}

