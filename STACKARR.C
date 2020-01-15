#include<conio.h>
#include<stdio.h>
struct stack
{
 int size;
 int top;
 int *s;
 };
int main()
{
 struct stack s;
 clrscr();
 printf("Enter the size ");
 scanf("%d",&s.size);
 s.s=(int)malloc(s.size*(sizeof(int)));
 getch();
 return 0;
 }
 s.top=-1;