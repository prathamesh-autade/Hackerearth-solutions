n=int(input())
a=input().split()
d={}
for i in range(n):
    if a[i] in d:
        d[a[i]]=d[a[i]]+1
    else:
        d[a[i]]=1    
k=int(input())
j=list(set(a))
j.sort()
for i in j:
    if d[i]==k:
        print(i)
        break
