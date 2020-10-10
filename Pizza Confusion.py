n=int(input())
arr=[]
for i in range(n):
    a=input().split()
    arr.append(a)
maxx=-1
for i in range(n):
    if(int(arr[i][1])>maxx):
        maxx=int(arr[i][1]) 
        order=arr[i][0]
    elif(int(arr[i][1])==maxx):
        order=min(arr[i][0],order)
print(order)            
