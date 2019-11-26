package com.company;

import java.sql.SQLOutput;

class Ll3{
    Node head;
    static  class Node{
        int data;
        Node next;
        Node(int d){
            data=d;
            next=null;
        }
    }

    void insertStart(int x){
        Node temp=new Node(x);                 ;
        temp.next=head;
        head=temp;
    }

    void insertEnd(int x){
        Node temp=new Node(x);
        if(head==null){
            head=temp;
        }
        Node last=new Node(x);
        while(last.next!=null)
        last=last.next;
        last.next=temp;
    }

    void printThis(){
        Node temp=head;
        while(temp!=null){
            System.out.println(temp.data);
            temp=temp.next;
        }

    }
    public static void main(String[] args) {
	      Ll3 list=new Ll3();
          list.insertEnd(10);
          list.insertStart(20);
          list.insertStart(30);
          list.insertEnd(40);
          list.printThis();
    }
}
;