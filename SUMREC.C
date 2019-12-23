#include<conio.h>
#include<stdio.h>
int sum(int n)
{
  int s=0;
  int r;
  if(n>0)
  {
   r=n % 10;
   s=s+r;
   sum(n/10);
   }
  return s;
}
int main()
{
 int num;
 int result;
 clrscr();
 printf("Enter the number ");
 scanf("%d",&num);
 result=sum(num);
 printf("The sum of the digits is %d ",result);
 return 0;
 }