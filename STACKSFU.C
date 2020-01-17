#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct stack
{
  int size;
  int top;
  int *S;
};

void create(struct stack *st)
{
  printf("Enter the size of the array :  ");
   scanf("%d",&st->size);
  st->top=-1;
  st->S=(int*)malloc(st->size*sizeof(int));
}
void display(struct stack st)
{
 int i;
 for(i=st.top-1;i>=0;i--)
  printf("%d",st.S[i]);
 printf("\n");
}
void push(struct stack *st,int x)
{
  if(st->top==st->size-1)
   printf("The stack is full ");

  else
   {
	st->top++;
	st->S[st->top]=x;
   }
}
int pop(struct stack *st)
{
  int x=-1;
  if(st->top==-1)
   printf("The stack is empty ");
  else
   x=st->S[st->top--];
   return x;
}
int peek(struct stack st,int pos)
{
 int x=-1;
 if((st.top-pos+1)>0)
  printf("Invalid position");
 else
 x=st.S[st.top-pos+1];
 return x;
}
int stackTop(struct stack st)
{
 if(top==-1)
  return -1;
 else
 return st.S[st.Top];
 }
int stackEmpty(struct stack st)
{
 if(st.top==-1)
  return 1;
 else
  return 0;
}
int isFull(struct stack st)
{
 if(st.top==st.size-1)
  return 1;
 else
  return 0;
 }
void main()
{
 struct stack st;
 clrscr();
 create(&st);
 push(&st,10);
 push(&st,50);
 push(&st,70);
 push(&st,30);
 display(st);
 pop(&st)
 display(st);
 printf("%d \n ",peek(st,3));
 getch();
 return 0;
}



