class Node:
    def __init__(self,data):
        self.data=data
        self.next=None
class CircularList:
    def __init__(self):
        self.head=None
        
    def append(self,data):
        if self.head is None:
            self.head=Node(data)
            self.head.next=self.head
        else:
            newnode=Node(data)
            curnode=self.head
            while curnode!=self.head:
                curnode=curnode.next
            curnode.next=newnode
            newnode.next=self.head

        def prepend(self,data):
            newnode=Node(data)
            curnode=self.head
            newnode.next=self.head
            if not self.head:
                newnode.next=newnode
            else:
                while curnode!=self.head:
                    curnode=curnode.next
                curnode.next=newnode
                newnode.next=self.head

        def printlist(self):
            curnode=self.head
            while curnode:
                print(curnode.data)
                curnode=curnode.next
                if curnode==self.head:
                    break

clist=CircularList()
clist.append("A")
clist.append("B")
clist.append("C")
clist.prepend("D")
clist.printlist()








                
                

                
    
        
