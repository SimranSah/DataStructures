#include<stdio.h>
#include<conio.h>
int add(int ,int);
int main()
{
 int a=5;
 int b=4;
 int c;
 clrscr();
 c=add(a,b);
 printf("%d",c);
 return 0;
 }
int add(int i,int j)
{
 int sum;
 sum=i+j;
 return sum;
 }