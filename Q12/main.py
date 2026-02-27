n=int(input())
arr=[]
for i in range(n):
    arr.append(int(input()))

start,target=0,1

while start<n:
    if arr[start]==target:
        start+=1
        target+=1
    else:
        print(target)
        exit()
print(target)