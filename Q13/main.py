n= int(input())
arr=[]

for i in range(n):
    arr.append(int(input()))

low=mid=0
high=n-1

while mid<=high:
    if arr[mid]==0:
        temp = arr[mid]
        arr[mid]=arr[low]
        arr[low]=temp
        low+=1
        mid+=1
    elif arr[mid]==1:
        mid+=1
    else:
        temp = arr[mid]
        arr[mid]=arr[high]
        arr[high]=temp
        high-=1

for i in range(n):
    print(arr[i],end=" ")