n=int(input())
arr=[]
for i in range(n):
    arr.append(int(input())) 

k=int(input())
start=0

for i in range(n):
    if arr[i]!=k:
        arr[start]=arr[i]
        start+=1

for i in range(start):
    print(arr[i],end=" ")