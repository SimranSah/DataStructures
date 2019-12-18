#implementing simple stack using python functions
def isEmpty(l):
    if len(l)==0:
        return True
    else:
        return False
def push(l,data):
    l.append(data)
    return l

def pop(l):
    if isEmpty==True:
        return False
    else:
        t=l[len(l)-1]
        del l[len(l)-1]
        return t
list1=[]
n=int(input("Enter the size of the list : "))
for i in range(0,n):
    a=int(input("Enter the element : "))
    list1.append(a)    
print(" 1.POP 2.PUSH 3.EXIT ")
ch=int(input("Enter your choice: "))
if ch==1:
    print(pop(list1)," is deleted from the list ")
if ch==2:
    data=int(input("Enter the element to be added to the list "))
    print(push(list1,data)," is the list after adding the element")
if ch==3:
    print("Thanks for using this program")
    
    

    
    
    
