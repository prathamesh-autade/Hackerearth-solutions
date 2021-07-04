#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int ctOnes(int n){
	int ct=0;
	while(n!=0){
		int rb= n & -n;
		n=n-rb;
		ct++;
	}
	return ct;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		vector<int> a(n);
		vector<int> vals;
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++){
			int ct=ctOnes(a[i]);
			vals.push_back(ct);
		}
		sort(vals.begin(),vals.end(),greater<int>());	
		long long sum=0;
		for(int i=0;i<k;i++)
			sum+=vals[i];
		cout<<sum<<endl;	

	}
	return 0;
}
