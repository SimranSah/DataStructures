#include<stdio.h>
#include<conio.h>
void fun1(int num)
{
 if(num>0)
 {
  printf("%d\n",num);
  fun1(num-1);
  fun1(num-1);
  }
}
int main()
{
 clrscr();
 fun1(3);
 return 0;
 }