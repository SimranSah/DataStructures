#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Node
{
 int data;
 struct Node *next;
 }*top=NULL;

void push(int x)
{
 struct Node *t;
 t=(struct Node*)malloc(sizeof(struct Node));
 if(t==NULL)
 printf("The stack is full ");
 else
 {
  t->data=x;
  t->next=top;
  top=t;
 }
}
int pop()
{
 struct Node *p;
 int x=-1;
 if(top==NULL)
 printf("The stack is empty");
 else
 {
   p=top;
   top=top->next;
   x= p->data;
   free(p);
  }
 return x;
}

int stackTop()
{
  if (top)
  return top->data;
  else
  return -1;
}
int isEmpty()
{
 return top?0:1;
 }
void display()
{
 struct Node *p;
 p=top;
 while(p!=NULL)
 {
  printf(" %d ",p->data);
  }
 printf("\n");
}
int main()
{
 clrscr();
 push(20);
 push(10);
 push(5);
 display();
 printf(" Deleted %d ",pop());
 getch();
 return 0;
}


