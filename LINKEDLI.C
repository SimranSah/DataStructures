#include<conio.h>
#include<stdio.h>
void add(struct node **q,int no)
{
 struct node *temp;
 temp=(struct node)malloc(sizeof(struct node));
 temp->data=no;
 temp->next=*q;
 *q=temp;
 }
int main()
{
 struct LinkedList
  {
   int data;
   struct LinkedList *next;
  };
 struct LinkedList *node;
 node *head;
 head=(node*)malloc(sizeof(node));
 clrscr();
 add(head,10)



