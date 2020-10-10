#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int diff=n-m;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int max_sum=0;
		int min_sum=0;
		sort(a,a+n);
		for(int i=0;i<diff;i++){
			min_sum+=a[i];
		}
		for(int i=n-diff;i<n;i++){
			max_sum+=a[i];
		}
		int ans=max_sum-min_sum;
		cout<<ans<<'\n';
	}
}
