#include<stdio.h>
#include<conio.h>
float funTaylor(int x,int n)
{
 static int p,f=1;
 float r;
 if(n==0)
	 return 1;
 else
	 r=funTaylor(x,n-1);
	 p*=x;
	 f*=n;
	 return r+p/f;
}
int main()
{
 int x,n;
 clrscr();
 printf("Enter value x : ");
 scanf("%d",&x);
 printf("Enter value of n : ");
 scanf("%d",&n);
 printf("The result is : %f ", funTaylor(x,n));
 getch();
 return 0;
}



