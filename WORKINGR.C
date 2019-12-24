#include<stdio.h>
#include<conio.h>
int fun1(int n)
{
  if(n>0)
  {
	return fun1(n-1)+n;
	}
  return 0;
}
int main()
{
  int a=5;
  clrscr();
  printf("%d",fun1(a));
  return 0;
}