def sel_sort(A):
    for i in range(0,len(A)):
        min=i
        for j in range (i+1,len(A)):
            if A[j]<A[min]:
                min=j;
            temp=A[i]
            A[i]=A[min]
            A[min]=temp
A=[2,4,5,11,22,13]
sel_sort(A)
print("The sorted list is ",A)
