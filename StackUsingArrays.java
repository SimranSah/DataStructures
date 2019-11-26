package com.company;

import javax.swing.*;
//Class named Stack to show the functioning of stacks with arrays
 class Stack {
        final int max = 1000;
        int[] arr = new int[max];
        int top;
        Stack(){
            top = -1;
        }
        boolean Push ( int x){
            if (top >=( max - 1)) {
                System.out.println("Stack overflow");
                return false;
            }
            else {
                arr[++top] = x;
                System.out.println(x + "  ADDED ");
                return true;
            }
        }

        int Pop () {
            if (top < 0) {
                System.out.println("Stack underflow");
                return 0;
            }
            else {
                int y = arr[top--];
                return y;
            }
        }

        boolean Empty () {
            return (top < 0);
        }

        int ElementDisplay () {
            if (top < 0) {
                System.out.println("Stack underflow");
                return 0;
            }
            else {
                int a = arr[top];
                return a;
            }
        }
    }

     //Program execution starts here
      class Main{
        public static void main (String args[]){
        Stack s = new Stack();
        s.Push(20);
        s.Push(30);
        s.Push(40);
        System.out.println(s.Pop()+" Popped out of stack");
        System.out.println(s.Pop()+" Popped out of stack");
        System.out.println(s.Pop()+" Popped out of stack");
        s.Empty();
        s.ElementDisplay();
       }
    }

