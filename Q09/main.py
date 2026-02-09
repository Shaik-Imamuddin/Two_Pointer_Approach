n=int(input())
arr=[]
for i in range(n):
    arr.append(int(input()))

for i in range(n):
    if arr[i]>=0:
        continue
    j=i
    while(j>0 and arr[j-1]>=0):
        temp = arr[j]
        arr[j] = arr[j-1]
        arr[j-1]=temp
        j-=1

for i in range(n):
    print(arr[i],end=" ")