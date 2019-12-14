#include<stdio.h>
#include<conio.h>
main()
{
 char name[]="simran";
 char *ptr;
 ptr=name;
 while(*ptr!='\0')
 {
  printf("%c",*ptr);
  ptr++;
  }
 getch();
 return 0;
}
