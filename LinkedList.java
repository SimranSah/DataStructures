//Program to create nodes and linking them to form a list;
package com.company;

class LinkedList{
    Node head;
    static class Node{
      int data;
      Node next;
      Node(int d) {
          data = d;
          next = null;
      }
    }
    public static void main(String[] args){
        LinkedList list=new LinkedList();
        list.head=new Node(1);
        Node first=new Node(2);
        Node second=new Node(3);
        list.head.next=first;
        first.next=second;

    }
}
