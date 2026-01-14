str=input()
start=0
end=len(str)-1

while start<end:
    if str[start].isalnum()==False:
        start+=1
        continue
    if str[end].isalnum()==False:
        end-=1
        continue
    if(str[start].lower()!=str[end].lower()):
        print("Not Palindrome")
        break
    start+=1
    end-=1

else:
    print("Palindrome")