#include<stdio.h>
#include<conio.h>
void fun1(int n)
{
 if(n>0)
 {
  printf("%d",n);
  fun1(n-1);
  }
}
void main()
{
 int x=4;
 fun1(x);
 }