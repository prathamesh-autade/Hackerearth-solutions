#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n+1,0);
    int hsh[n+1]={0};
    for(int i=0;i<n;i++){
        cin>>a[i];

    }


    int q;
    cin>>q;
    while(q--){
        int x,l,r;
        cin>>x>>l>>r;

        hsh[l]+=x;
        hsh[r+1]-=x;

    }
    for(int i=1;i<n;i++)
        hsh[i]=hsh[i-1]+hsh[i];

    for(int i=0;i<n;i++){
        a[i]=a[i]+hsh[i];
       // cout<<a[i]<<" ";
    }
    //cout<<endl;


    int maxx=-1;
    for(int i=0;i<n;i++){
        if(a[i]>maxx)
            maxx=a[i];
    }
    cout<<maxx<<endl;

	return 0;
}




