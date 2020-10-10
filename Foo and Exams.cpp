#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c,d,k;
        cin>>a>>b>>c>>d>>k;
        long long x=1;
        int ct=0;
        while(1){
            long long ans=(a*x*x*x)+(b*x*x)+(c*x)+d;
            if(ans>k)
                break;
            x+=1;  
            ct+=1;  
        }
        cout<<ct<<'\n';
        
    }
}
