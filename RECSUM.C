#include<conio.h>
#include<stdio.h>
int sum(int n)
{
 if(n==0)
 return 0;
 else
 return sum(n-1)+n;
}
int main()
{
 int n;
 clrscr();
 printf("ENTER N -");
 scanf("%d",&n);
 printf("The sum is %d ",sum(n));
 getch();
 return 0;
}

