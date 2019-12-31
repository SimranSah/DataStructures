#include<stdio.h>
#include<conio.h>
int pow(int m,int n)
{
 if(n==0)
 return 1;
 else
 return pow(m,n-1)*m;
 }
int main()
{
 int m,n;
 clrscr();
 printf("Enter m : ");
 scanf("%d",&m);
 printf("Enter n : ");
 scanf("%d",&n);
 printf("%d",pow(m,n));
 getch();
 return 0;
}