#include<stdio.h>
#include<conio.h>
int fun(int n)
{
 if(n>10)
 return n-2;
 else
 return fun(fun(n+1));
 }
int main()
{
 int n;
 clrscr();
 printf("ENTER N - ");
 scanf("%d",&n);
 printf("The result is %d " ,fun(n));
 getch();
 return 0;
}