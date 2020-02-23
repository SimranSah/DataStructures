class Stack:
    def __init__(self):
        self.items=[]

    def push(self,item):
        self.items.append(item)

    def pop(self):
        if len(items)==0:
            return None
        else:
            p=self.items[len(items)-1]
            delete self.items[len(items)-1]
            return p
            
        

    def isempty(self):
        if len(items)==0:
            return True
        else:
            return False

    def print(self):
        print(self.items)


s=Stack()
while True:
    print("1.PUSH 2.POP 3.PRINT 4.ISEMPTY 5.EXIT")
    ch=int(input("Enter your choice : "))
    if ch==1:
        s.push(1)
        print("pushed!")
    if ch==2:
        print(s.pop()," popped!")
    if ch==3:
        s.print()
    if ch==3:
        if s.isempty:
            print("Stack is empty ")
        else:
            print("Not empty")
    if ch==4:
        print("Exiting !")
        break
    
            
        

        
