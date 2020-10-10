#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int ans=0;
        int i=0,j=0;
        while(i<n && j<n){
            if(b[j]>=a[i]){
                ans=max(ans,j-i);
                j++;
            }
            else
                i++;
        }
        cout<<ans<<'\n';
    }
}
