def insert_sort(list):
    for i in range(1,len(A)):
        value=list[i]
        j=i-1
        while j>=0:
            if value<list[j]:
                list[j+1]=list[j]
                list[j]=value
                j=j-1
            else:
                break
A=[4,3,1,5,6,8]
insert_sort(A)
print("The sorted list is ",A);
