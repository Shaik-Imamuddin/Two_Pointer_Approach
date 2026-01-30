n=int(input())
arr=[]
for i in range(n):
    arr.append(int(input()))

start=0

for i in range(n):
    if arr[i]%2==0:
        temp=arr[i]
        
        j=i
        while j>start:
            arr[j]=arr[j-1]
            j-=1
    
        arr[start]=temp
        start+=1

for i in range(n):
    print(arr[i],end=" ")