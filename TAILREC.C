#include<stdio.h>
#include<conio.h>
int fun(int n)
{
 if(n>0)
 {
  printf("%d\n",n);
 }
 return fun(n-1);
}
int main()
{
 clrscr();
 fun(10);
 return 0;
}