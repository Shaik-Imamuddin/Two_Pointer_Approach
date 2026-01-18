n1=int(input())
arr1=[]
for i in range(n1):
    arr1.append(int(input()))

n2=int(input())
arr2=[]
for i in range(n2):
    arr2.append(int(input()))

if(n1!=n2):
    print("Not Equal")
    exit()

start=0
while(start<n1):
    if arr1[start]!=arr2[start]:
        print("Not Equal")
        break
    start+=1
else:
    print("Equal")