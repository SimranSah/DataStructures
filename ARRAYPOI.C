#include<stdio.h>
#include<conio.h>
main()
{
 int *a[4];
 int i;
 int x=1,y=2,z=3,w=4;
 clrscr();
 a[0]=&x;
 a[1]=&y;
 a[2]=&z;
 a[3]=&w;
 for(i=0;i<4;i++)
 {
  printf("%d ",a[i]);
  }
 getch();
 return 0;
}
