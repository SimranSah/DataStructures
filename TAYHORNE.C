#include<stdio.h>
#include<conio.h>
float funTaylor(int x,int n)
{
 static int s=1;
 if(n==0)
 return s;
 else
 s=1+(x/n)*s;
 return funTaylor(x,n-1);
}

int main()
{
 int x,n;
 clrscr();
 printf("Enter the x: ");
 scanf("%d",&x);
 printf("Enter the n: ");
 scanf("%d",&n);
 printf("The answer to the series is %f: ",funTaylor(x,n));
 getch();
 return 0;
}

