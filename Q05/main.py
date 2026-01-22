n = int(input())
arr=[]
for i in range(n):
    arr.append(int(input()))

i=0
for j in range(n):
    if arr[j]!=0:
        temp = arr[j]
        arr[j] = arr[i]
        arr[i] = temp
        i+=1
for k in range(n):
    print(arr[k],end=" ")