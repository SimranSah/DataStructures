def bsort(A):
    for i in range(len(A)-1):
        for j in range(len(A)-i-1):
            if A[i]>A[j+1]:
                temp=A[j]
                A[j]=A[j+1]
                A[j+1]=temp
A=[22,11,55,44,90]
bsort(A)
print(" The list is sorted ",A)
                
