
n=int(input())
a=list(input())
b=list(input())
cost=0
i=0
while(i<n):
    if(a[i]==b[i]):
        i+=1
        continue
    cost+=1
    if(i+1<n and a[i+1]!=b[i+1] and a[i]==b[i+1] and a[i+1]==b[i]):
        i+=1
    i+=1    
    
print(cost)        
