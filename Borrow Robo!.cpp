#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define vll vector<ll>
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL); cout.tie(NULL);}
#define nl "\n"
ll hashArr[200005];
int main()
{
  send help
  #ifndef ONLINE_JUDGE
	freopen("in00.txt", "r", stdin);
	freopen("out00.txt", "w", stdout);
  #endif
  ll n;cin>>n;
  ll a[n+1];
  for(ll i=1;i<=n;i++)
  {
    cin>>a[i];
    hashArr[a[i]]++;
  }
  ll Q;cin>>Q;
  while(Q--)
  {
    ll i,price;
    cin>>i>>price;
    if(a[i]==price) cout<<0<<"\n"; //Already has the amount
    else if(a[i]>price) 
    {
      if(hashArr[price]==0) // No one has a robo worth price
      cout<<-1<<"\n";
      else
      cout<<hashArr[price]<<"\n";
    }
    else if(a[i]<price)
    { // two cases:
      // Take price - a[i] from someone or take amount equal to price from someone
      // Mind for the case where a[i]==price-a[i]
      ll required=price-a[i];
      ll ans=hashArr[price];
      if(required==a[i])
      {
        if(hashArr[required]-1>0) ans+=hashArr[required]-1;
        
      }
      else
      {
       if(hashArr[required]>0) ans+=hashArr[required];
      }
      
      if(ans!=0) cout<<ans<<"\n";
      else cout<<-1<<"\n";

    }
  }
   
    
  return 0;
}
