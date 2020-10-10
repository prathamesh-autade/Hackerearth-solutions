n=int(input())
cg=0
cm=0
for j in range(n):
    s=input()
    s=s.split()
    #print(s)
    for i in range(len(s)):
        if(s[i].isdigit()):
            
            if(s[0]=='G:' and s[i]=='19'):
                cg+=2
            elif(s[0]=='G:' and s[i]=='20'):
                cg+=2    
            elif(s[0]=='M:' and s[i]=='19'):
                cg+=1
            elif(s[0]=='M:' and s[i]=='20'):
                cg+=1
            elif(s[0]=='G:' and s[i]!='19' and s[i]!='20'):
                cm+=2
            elif(s[0]=='M:' and s[i]!='19' and s[i]!='20'):
                cm+=1      

#print(cg,cm)              
if(cg>cm):
    print("Date")
elif cg==cm:
    print("No Date")    
else:
    print("No Date")                    


