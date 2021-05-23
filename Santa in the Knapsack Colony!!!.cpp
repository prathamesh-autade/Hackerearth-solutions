#include<iostream>
using namespace std;
const long long N=1e7+10;
long long hsh[N];
int main(){
	int n,k;
	cin>>n>>k;
	long long a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		hsh[a[i]]++;
	}
	int ct=0;
	for(int i=0;i<N;i++){
		if(hsh[i]>k)
			ct++;
	}
	cout<<ct<<endl;
	return 0;
}
