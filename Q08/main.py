n=int(input())
arr=[]

for i in range(n):
    arr.append(int(input()))

i=0
for j in range(1,n):
    if arr[j]!=arr[i]:
        i+=1
        arr[i]=arr[j]

for k in range(i+1):
    print(arr[k],end=" ")