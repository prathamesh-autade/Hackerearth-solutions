n=int(input())
x=[]
l=list(map(int,input().split()))
b=-1
for i in range(n-1,-1,-1):
    if b<=l[i]:
        b=l[i]
        x.append(l[i])  
x.reverse()
for i in x:
    print(i,end=" ")        
