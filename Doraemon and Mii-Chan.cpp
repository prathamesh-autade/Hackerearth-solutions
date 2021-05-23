#include <bits/stdc++.h>
using namespace std;
const int N =1e5+10;

int hsh[N];
int main(){
    int m,n;
    cin>>m>>n;
    
   
   
    while(m--){
        int k,l;
        cin>>k>>l;
        hsh[l]++;


    }
    bool canopen=true;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(hsh[x]==0) canopen=false;
    }
    if(canopen) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
   
    
   






	return 0;
}




