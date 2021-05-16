#include<iostream>
#include<string>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		string pat="SUVO";
		string pat1="SUVOJIT";
		int ct1=0;
		int ct2=0;
		for(int i=0;i<s.length();i++){
			int f=1;
			int j;
			for(j=i;j-i<=3;j++){
					if(s[j]!=pat[j-i]){
						f=0;
						break;
					}
			}
			if(f==1 && ( (s[j]!='J') || (s[j]=='J' && s[j+1]=='I' && s[j+2]!='T') || (s[j]=='J' && s[j+1]!='I' ) ) )
				ct1++;
		}

		for(int i=0;i<s.length();i++){
			int f=1;
			for(int j=i;j-i<=6;j++){
					if(s[j]!=pat1[j-i]){
						f=0;
						break;
					}
			}
			if(f==1)
				ct2++;
		}
		cout<<"SUVO = "<<ct1<<", "<<"SUVOJIT = "<<ct2<<endl;


	}
	return 0;
}
