n=int(input())
arr=[]
for i in range(n):
    arr.append(int(input()))

target = int(input())

start,end=0,n-1

while(start<end):
    sum=arr[start]+arr[end]

    if sum==target:
        print(arr[start],arr[end])
        break
    elif sum<target:
        start+=1
    else:
        end-=1