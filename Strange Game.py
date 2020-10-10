for i in range(int(input())):
    nk=list(map(int,input().split()))
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    count=0
    
    max_b=max(b)+1
    for i in range(nk[0]):
        if a[i]<max_b:
            count+=(max_b-a[i])*nk[1]
    print(count)        
