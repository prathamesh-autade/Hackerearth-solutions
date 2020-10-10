ct=0
a=[]
for i in range(int(input())):
    x=list(map(int,input().split()))
    a.append(x)
for i in a:
    z=i[0]/i[1]
    x=i[1]/i[0]
    if(z>=1.6 and z<=1.7):
        ct+=1
    elif(x>=1.6 and x<=1.7):
        ct+=1    
print(ct)          
