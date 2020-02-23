class Node:
    def __init__(self,val):
        self.left=None
        self.right=None
        self.val=val

def insert(root,newnode):
    if root is None:
        root=newnode
    
    else:
        if root.val<=newnode.val:
            if root.right==None:
                root.right=newnode
            else:
                insert(root.right,newnode)

        else:
            if root.left==None:
                   root.left=newnode
            else:
                   insert(root.left,newnode)

def inorder(root):
    if root:
        inorder(root.left)
        print(root.val)
        inorder(root.right)

def preorder(root):
    if root:
        print(root.val)
        preorder(root.left)
        preorder(root.right)
        

def postorder(root):
    if root:
        postorder(root.left)
        print(root.val)
        postorder(root.right)

        
a=Node(100)
insert(a,Node(180))
insert(a,Node(20))
insert(a,Node(120))
inorder(a)



        
