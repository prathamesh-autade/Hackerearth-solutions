n=int(input())
a=list(map(int,input().split()))
b=list(map(int,input().split()))
a.sort()
b.sort()
ct=0
for i,j in zip(a,b):
    if i>=j:
        ct+=1
if ct==n:
    print("Yes")
else:
    print("No")            
