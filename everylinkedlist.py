class Node:
    def __init__(self,data):
        self.data=data
        self.next=None

class LinkedList:
    def __init__(self):
        self.head=None

    def print_list(self):
        temp=self.head
        while temp:
            print(temp.data)
            temp=temp.next

    def append(self,data):
        newnode=Node(data)
        if self.head is None:
            self.head=newnode
            return

        lastnode=self.head
        while lastnode.next:
            lastnode=lastnode.next
        lastnode.next=newnode

    def prepend(self,data):
        newnode=Node(data)
        newnode.next=self.head
        self.head=newnode

    def inode(self,prevnode,data):
        if not prevnode:
            print("The node isn't present ")
            return
        
        newnode=Node(data)
        newnode.next=prevnode.next
        prevnode.next=newnode

    def deletenode(self,key):
        curnode=self.head
        while curnode and curnode==key:
            self.head=curnode.next
            curnode=None
            return
        prev=None
        if curnode and curnode!=key:
            prev=curnode
            curnode=curnode.next
        if curnode is None:
            return
        prev.next=curnode.next
        curnode=None
        
llist=LinkedList()
llist.append("A")
llist.append("B")
llist.append("C")
llist.append("D")
llist.append("E")
llist.inode(llist.head.next,"F")
llist.deletenode("E")
llist.print_list()

                        


            

        

        
