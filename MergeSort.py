def merge(left,right):
    result=[]
    i=0
    j=0
    while i<len(left) and j<len(right):
        if left[i]<=right[j]:
            result.append(left[i])
            i=i+1
        else:
            result.append(right[j])
            j=j+1
            
    result+=left[i:]
    result+=right[j:]
    return result

def mergesort(l1):
    if len(l1)<=1:
        return l1
    
    mid=int(len(l1)/2)
    left=mergesort(l1[:mid])
    right=mergesort(l1[mid:])
    return merge(left,right)

arr=[1,4,2,5,9,3]
print(mergesort(arr))
    
    
