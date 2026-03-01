n=int(input())
arr=[]
for i in range(n):
    arr.append(int(input()))

k=int(input())

start,end=0,1

while end<n:
    diff = arr[end]-arr[start]

    if diff==k and start!=end:
        print(arr[start],arr[end])
        break

    if diff<k:
        end+=1
    else:
        start+=1

    if start==end:
        end+=1
else:
    print("No Pair Found")