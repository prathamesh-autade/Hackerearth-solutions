#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++){
        cin>>a[i];
    }
    int q;
    cin>>q;
    
    while(q--){
        int f=0;
        long long target;
        cin>>target;
        long long sum=0;
        for(int i=0;i<t;i++){
            sum+=a[i];
            if(sum>=target){
                cout<<i+1<<'\n';
                f=1;
                break;
            }
        }
        if(f==0){
            cout<<-1<<'\n';
        }
    }
    return 0;
}
