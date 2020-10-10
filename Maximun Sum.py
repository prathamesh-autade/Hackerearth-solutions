n=int(input())
a=list(map(int,input().split()))
summ=0
ct=0
for i in range(n):
    if(a[i]>=0):
        summ+=a[i]
        ct+=1
if(summ==0):
    print(max(a),1)   
else:
    print(summ,ct)        
