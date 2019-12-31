#include<stdio.h>
#include<conio.h>
int fac(int n)
{
 if(n==0)
 return 1;
 else
 return fac(n-1)*n;
}
int main()
{
 int n;
 clrscr();
 printf("ENTER N :");
 scanf("%d",&n);
 printf("THE FACTORIAL IS %d ",fac(n));
 getch();
 return 0;
}

