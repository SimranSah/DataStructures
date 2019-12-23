#include<stdio.h>
#include<conio.h>
int factorial(int n)
{
 int fac=1;
 if(n>1)
 fac=n*factorial(n-1);
 return fac;
 }
int main()
{
 int a;
 int result;
 clrscr();
 printf("Enter the number ");
 scanf("%d",&a);
 result=factorial(a);
 printf("The factorial is %d",result);
 return 0;
}

