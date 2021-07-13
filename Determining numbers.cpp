#include <bits/stdc++.h>
using namespace std;
const long long m= 1e9+7;
const int N = 1e5+10;
#define ll long long



void solve(){
    ll n;
    cin>>n;
    ll a[n];
    int xorr=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        xorr=xorr^a[i];
    }
    ll x=0,y=0;
    int rb=xorr & -xorr;
    for(int i=0;i<n;i++){
        if(rb & a[i])
            x=x^a[i];
        else
            y=y^a[i];
    }
    cout<<min(x,y)<<" "<<max(x,y)<<endl;

}

int main(){   
    //int t;
    //cin>>t;
    //while(t--)
        solve();
    
    

    return 0;
}




	
	

	
	
		
