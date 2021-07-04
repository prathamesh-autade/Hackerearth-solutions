#include<bits/stdc++.h>


 

using namespace std;

#define ll long long


 

int count_one(ll n)

{

    ll count=0;

    while(n)

    {

        n=n&(n-1);

        count++;

    }

    return count;

}

int main()

{

    ll t;

    cin>>t;


 

    while(t--)

    {

        ll m,p,r;

        cin>>m>>p;


 

        r=m^p;

        cout<<count_one(r)<<endl;

    }

return 0;

}
