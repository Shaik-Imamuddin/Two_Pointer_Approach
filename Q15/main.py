n = int(input())
arr = []

for i in range(n):
    arr.append(int(input()))

min_val=arr[0]
maxdiff=arr[1]-arr[0]

for i in range(n):
    diff = arr[i]-min_val

    if diff>maxdiff:
        maxdiff = diff

    if arr[i]<min_val:
        min_val=arr[i]
        
print(maxdiff)