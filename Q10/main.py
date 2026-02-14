n1=int(input())
arr1=[]
for i in range(n1):
    arr1.append(int(input()))

n2=int(input())
arr2=[]
for i in range(n2):
    arr2.append(int(input()))

res=[]
i=j=0

while(i<n1 and j<n2):
    if arr1[i]<arr2[j]:
        res.append(arr1[i])
        i+=1
    else:
        res.append(arr2[j])
        j+=1

while i<n1:
    res.append(arr1[i])
    i+=1

while j<n2:
    res.append(arr2[j])
    j+=1

for i in range(n1+n2):
    print(res[i],end=" ")