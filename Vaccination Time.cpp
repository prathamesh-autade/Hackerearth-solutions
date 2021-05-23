#include <bits/stdc++.h>
using namespace std;
const int N = 1e3+10;
long long a[N][N];
int main(){
	int n,m;
	cin>>n>>m;
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			int x;
			cin>>x;
			if(x%2==0)
				a[i][j]=0;
			else
				a[i][j]=1;
			//cout<<a[i][j]<<" ";
		}
		//cout<<endl;
	}
	//cout<<endl;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			a[i][j]=a[i-1][j]+a[i][j-1]-a[i-1][j-1]+a[i][j];
			//cout<<a[i][j]<<" ";
		}
		//cout<<endl;
	}

	//cout<<endl;

	int q;
	cin>>q;
	while(q--){
		int l1,r1,l2,r2;
		cin>>l1>>r1>>l2>>r2;
		int ans=a[l2][r2]-a[l1-1][r2]-a[l2][r1-1]+a[l1-1][r1-1];
		cout<<ans<<endl;

	}
	return 0;
}
