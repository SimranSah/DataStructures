#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Node
{
  char data;
  struct Node *next;
  }*top=NULL;

void push(char x)
{
 struct Node *t;
 t=(struct Node*)malloc(sizeof(struct Node));
 if(t==NULL)
   printf(" Stack overflow! " );
 else
 t->data=x;
 t->next=top;
 top=t;
}
char pop()
{
 char x=-1;
 struct Node *t;
 if(top==NULL)
  printf(" Stack underflow ! ");
 else
 {
   t=top;
   top=top->next;
   x=t->data;
   free(t);
 }
 return x;
}

void display()
{
 struct Node *p;
 p=top;
 while(p!=NULL)
 {
  printf("%c",p->data);
  p=p->next;
  }
 printf("\n");
}
int isBalanced(char *exp)
{
 int i;
 for(i=0;exp[i]!='\0';i++)
 {
  if(exp[i]=='(')
	push(exp[i]);
  else if(exp[i]==')')
   {
	 if(top==NULL)
	 return 0;
	 else pop();
	 }
  }
 return (top==NULL)?1:0;
}
int main()
{
 char *exp="((a+b)*(c+d))";
 clrscr();
 printf("%d",isBalanced(exp));
 getch();
 return 0;
}