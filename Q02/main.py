n=int(input())
arr=[]
for i in range(n):
    arr.append(int(input()))
start,end=0,n-1
while start<end:
    if arr[start]!=arr[end]:
        print("Not Palindrome")
        break
    start+=1
    end-=1
else:
    print("Palindrome")