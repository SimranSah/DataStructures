package com.company;

import java.sql.SQLOutput;

class Ll4{
    Node head;
    static  class Node{
        int data;
        Node next;
        Node(int d){
            data=d;
            next=null;
        }
    }

    void insertBetween(Node a,int x){
        if(a==null){
            System.out.println("The node cannot be null");
            return;
        }
        Node temp=new Node(x);                 ;
        temp.next=a;
        a=temp;
    }

    void printThis(){
        Node temp=head;
        while(temp!=null){
            System.out.println(temp.data);
            temp=temp.next;
        }

    }
    public static void main(String[] args) {
        Ll4 list=new Ll4();
        list.head=new Node(10);
        Node second=new Node(20);
        Node third=new Node(30);
        list.head.next=second;
        second.next=third;
        list.insertBetween(second,10);
        list.printThis();
    }
}
