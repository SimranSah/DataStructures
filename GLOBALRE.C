//CHECKING THE SAME WITH RECURSION
#include<stdio.h>
#include<conio.h>
int x=0;
int fun(int n)
{
  x++;
  if(n>0)
  {
   return fun(n-1)+x;
   }
  return 0;
}
int main()
{
 int a =5;
 clrscr();
 printf("%d",fun(a));
 return 0;
 }
