n=int(input())
if(n==1):
    print(1)
else:    
    a=list(map(int,input().split()))

    summ=0
    for i in range(n):
        summ+=(2*i)+1
    for i in range(n-1):
        summ-=a[i]
    print(summ)        
