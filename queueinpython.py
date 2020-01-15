class Queue:
    def __init__(self):
        self.items=[]
    def isEmpty(self):
        return self.items()
    def enqueue(self,item):
        self.items.insert(0,item)
    def dequeue(self):
        return self.items.pop()
    def display(self):
        while self.items()!=null:
            print(self.items())
q=Queue()
while True:
    print(" 1.Enqueue 2.Dequeue 3.Display 4.Exit")
    ch=int(input("Enter your choice : "))
    if ch==1:
        n=input("Enter the item : ")
        q.enqueue(n)
    if ch==2:
        q.dequeue(n)
    if ch==3:
        q.display()
    if ch==4:
        print("Thanks!")
        break
            
               
           
